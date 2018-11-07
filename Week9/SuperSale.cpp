#include <iostream>

using namespace std;

int Sack(int W, int wt[], int val[], int n)
{
   int i, j;
   int K[n+1][W+1];

   for (i = 0; i <= n; i++)
   {
       for (j = 0; j <= W; j++)
       {
           if (i==0 || j==0)
               K[i][j] = 0;
           else if (wt[i-1] <= j)
                 K[i][j] = max(val[i-1] + K[i-1][j-wt[i-1]],  K[i-1][j]);
           else
                 K[i][j] = K[i-1][j];
       }
   }

   return K[n][W];
}

int main()
{
    int T;
    cin>>T;
    int n, P[1000], W[1000], g, mw, total=0;
    for(int i=0; i<T; i++){
        cin>>n;
        for(int j=0; j<n; j++){
            cin>>P[j]>>W[j];
        }
        cin>>g;
        for(int j=0; j<g; j++){
            cin>>mw;
            total += Sack(mw, W, P, n);
        }
        cout<<total<<endl;
        total=0;
    }
    return 0;
}