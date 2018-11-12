#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
const char DUMMY = '.';

int manacher(string s) {
  // Để tránh phải xét riêng trường hợp độ dài xâu đối xứng chẵn / lẻ,
  // ta thêm 1 ký tự DUMMY vào giữa các ký tự của s.
  // CHÚ Ý: Phải đảm bảo DUMMY không có trong xâu s

	int n = s.size() * 2 - 1;
	vector <int> f = vector <int>(n, 0);

  // Tạo xâu a bằng cách chèn ký tự DUMMY vào giữa các ký tự của s.
  // Ví dụ:
  // s = aabcb
  // a = a.a.b.c.b
	string a = string(n, DUMMY);
	for (int i = 0; i < n; i += 2) a[i] = s[i / 2];

	int l = 0, r = -1, center, res = 0;
	for (int i = 0, j = 0; i < n; i++) {
		j = (i > r ? 0 : min(f[l + r - i], r - i)) + 1;
		while (i - j >= 0 && i + j < n && a[i - j] == a[i + j]) j++;
		f[i] = --j;
		if (i + j > r) {
			r = i + j;
			l = i - j;
		}

		int len = (f[i] + i % 2) / 2 * 2 + 1 - i % 2;
		if (len > res) {
			res = len;
			center = i;
		}
	}
  // Với mỗi vị trí i, xâu đối xứng dài nhất nhận i là tâm là [i - f[i], i + f[i]].
  // Ví dụ:
  // s = aabcb
  // a = a.a.b.c.b
  // f = 011010200
	return res;
}