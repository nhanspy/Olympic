#include<iostream>
#include<algorithm>
using namespace std;

struct DOANP2{
    int x1;
    int x2;
};
DOANP2 DP[100007];
void quickSort(DOANP2 a[], int left, int right) {
	int i = left, j = right;
	int pivot = a[left + rand() % (right - left)].x1;
	// chia dãy thành 2 phần
	while (i <= j) {
		while (a[i].x1 < pivot) ++i;
		while (a[j].x1 > pivot) --j;

		if (i <= j) {
			swap(a[i], a[j]);
			++i;
			--j;
		}
	}
	// Gọi đệ quy để sắp xếp các nửa
	if (left < j) quickSort(a, left, j);
	if (i < right) quickSort(a, i, right);
}
int main(){
    int n;
    int kq = 0;
    int minx=0,maxx=0;
    cin >> n;
    for (int i = 0 ; i < n ;i++){
        cin >> DP[i].x1 >> DP[i].x2;
    }
    quickSort(DP,0,n-1);
    for (int i = 0 ; i < n ;i++){
        if (DP[i].x1 > maxx){
            kq += maxx - minx;
            minx = DP[i].x1;
            maxx = DP[i].x2;
        }else if (DP[i].x2 > maxx){
            maxx = DP[i].x2;
        }
    }
    cout << kq + maxx - minx;
	return 0;
}
