#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	vector<int> rows,cols;
    int n = matrix.size(),m = matrix[0].size();
    for(int i =0;i<n;i++){
        for(int j = 0 ; j<m;j++){
            if(matrix[i][j]==0)
            {
                rows.push_back(i);
                cols.push_back(j);
            }
        }
    }
    for(int i = 0 ;i<rows.size();i++){
        for(int j =0;j<m;j++){
            matrix[rows[i]][j]=0;
        }
    }
    for(int i = 0 ;i<n;i++){
        for(int j =0;j<cols.size();j++){
            matrix[i][cols[j]]=0;
        }
    }
}