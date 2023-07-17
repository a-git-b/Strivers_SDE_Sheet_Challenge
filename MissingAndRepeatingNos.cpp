#include <bits/stdc++.h>
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	int xor1=0;
	for(int i=0;i<n;i++){
		xor1^=arr[i]^(i+1);
	}
	
	int rsb=xor1&(-xor1);
	int missing=0,repeating=0;
	for(int i=0;i<n;i++){
		if((arr[i]&rsb)!=0){
			missing^=arr[i];
		}
		else{
			repeating^=arr[i];
		}
		if(((i+1)&rsb)!=0){
			missing^=i+1;
		}
		else{
			repeating^=i+1;
		}
	}
	for(int i=0;i<n;i++){
		if(missing==arr[i]){
			swap(missing,repeating);
		}
	}
	return {missing,repeating};	
}
