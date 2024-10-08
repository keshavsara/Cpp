//0-1 knapsack problem
//put n items with given weight and value in a knapsack of 
//capacity W to get the maximum total value in the knapsack
/*
i        0       1       2
wt[i]    10      20      30
value[i] 100     50      150 

w=50
*/
#include<bits/stdc++.h>
using namespace std;
int knapsack(int value[],int wt[],int n,int W)
{
    if(n==0 || W==0)
    {
        return 0;
    }
    if(wt[n-1]>W)
    {
        return knapsack(value,wt,n-1,W);
    }
    return max(knapsack(value,wt,n-1,W-wt[n-1])+value[n-1],knapsack(value,wt,n-1,W));
    
}
int main()
{
    int wt[]={10,20,30};
    int value[]={100,50,150};
    int W=50;

    cout<<knapsack(value,wt,3,W)<<endl;
    return 0;
}
