#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	
	int n=matrix.size();
	int m=matrix[0].size();
	unordered_set<int>col;
	unordered_set<int>row;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(!matrix[i][j]){
				col.insert(j);
				row.insert(i);
			}
		}
	}
	for(auto x : col){
		for(int i=0;i<n;i++){
			matrix[i][x]=0;
		}
	}
	for(auto y: row){
		for(int i=0;i<m;i++){
			matrix[y][i]=0;
		}
	}

}
