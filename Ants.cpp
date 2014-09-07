#include<iostream>
#include<math.h>

using namespace std;

int max3(int,int,int);

int main()
{
        int L = 10;
        int n = 3;
        int x[] = {2,6,7};

        int minT = 0;
        for(int i = 0; i < n;i++){
               minT = max(minT,min(x[i],L-x[i]));
        }

        int maxT = 0;
        for(int i = 0; i< n; i++){
                maxT = max(maxT,max(x[i],L-x[i]));
        }

        cout<<minT<<" "<<maxT<<endl;


}

int max3(int n1,int n2,int n3)
{
        return max(n3,max(n1,n2));
}
