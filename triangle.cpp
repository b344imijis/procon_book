#include <iostream>
#include <math.h>

using namespace std;

int max3(int,int,int);

int main()
{
        int n = 5;
        int a[] = {2,3,4,5,10};

        int ans = 0;

        for(int i = 0;i<n;i++){
                for(int j=i+1;j<n;j++){
                        for(int k = j+1; k<n; k++){
                                int len = a[i] + a[j] + a[k];
                                int ma = max3(a[i],a[j],a[k]);
                                int rest = len - ma;

                                if(ma < rest){
                                        ans = max(ans,len);
                                }
                        }
                }
        }

        cout << ans << endl;
                                        
}

int max3(int n1,int n2,int n3)
{
        int ma = max(n1,n2);
        ma = max(ma,n3);
        return ma;
}



