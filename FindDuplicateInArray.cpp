#include <bits/stdc++.h>
int findDuplicate(vector<int> &arr, int n){
	vector<int>mp(n,0);
	for(int i=0;i<n;i++){
		mp[arr[i]]++;
	}
	for(int i=0;i<n;i++){
		if(mp[i]>1){
			return i;
		}
	}
	return -1;
}