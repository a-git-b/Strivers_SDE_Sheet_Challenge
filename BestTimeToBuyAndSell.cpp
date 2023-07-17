#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int profit=0;
    int n=prices.size();
    int minimum=prices[0];
    for(int i=1;i<n;i++){
        if(prices[i]<minimum){
            minimum=prices[i];
            
        }
        else{
            profit=max(profit,prices[i]-minimum);
        }
    }
    return profit;
}