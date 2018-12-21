#include <iostream>
#include <math.h>
using namespace std;
int F[2][1000000];

long long u,v;
long long ug[1000001];
long long vg[1000001];
long long ugu[1000001];
long long vgv[1000001];
void gen_sub2()
{
    ugu[0] = 0;
    vgv[0] = 0;
    int n;;
    n = 10;
    for(int i=1;i<=n;i++)
    {
        ugu[i] = 0;
        vgv[i] = 0;
        int j=i;
        while (j<=n)
        {
            ug[j]+=1;
            vg[j]+=i;
            j+=i;
        }
        vgv[i] += vgv[i-1] + vg[i];
        ugu[i] += ugu[i-1] + ug[i];
    }

    int t;
    cin >> t;
    int tmp1 , tmp2;

    while (t--){
        cin >> tmp1 >> tmp2 ;
        cout << ugu[tmp2] - ugu[tmp1 - 1] << " " << vgv[tmp2] - vgv[tmp1 - 1] << endl;
    }
    
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<vg[i]<<" ";
    // }
    // cout << endl;
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<ug[i]<<",";
    // }

}

void snt(int n){
    F[0][n] = 1;
    F[1][n] = n;
    for (int i = 1 ; i <= sqrt(n) ; i ++){
        if (n % i == 0) {
            F[0][n] ++;
            F[1][n] += i;
        }
    }
}

int main () {
    
    // F[1][0] = 0;
    // F[0][0] = 0;
    // F[0][1] = 1;
    // F[1][1] = 1;

    // for (int i = 2 ; i <= 1000000 ; i++){
    //     snt(i);
    // }

    // int t;
    // cin >> t;
    // int tmp1 , tmp2;

    // while (t--){
    //     cin >> tmp1 >> tmp2 ;
    //     cout << F[0][tmp2] + F[0][tmp1]  << " " << F[1][tmp2] + F[1][tmp1] << endl;
    // }

    gen_sub2();


}