#include<bits/stdc++.h>
using namespace std;

int c=0;


bool isSafe(vector<string> v, int row, int col){
    for(int i=0;i<row;i++){
        if(v[i][col]=='#') return false;
    }
    for(int i=row-1,j=col-1;i>=0 && j>=0;j--,i--){
        if(v[i][j]=='#') return false;
    }
    for(int i=row-1,j=col+1;i>=0 && j<8;j++,i--){
        if(v[i][j]=='#') return false;
    }
    return true;
}

void helper(vector<string> v,int row=0, int col=0){
    if(row>=8){
        c++;
        return;
    }

    if(col>=8) return ;

    if(isSafe(v,row,col) && v[row][col]!='*'){
        v[row][col]='#';
        helper(v,row+1,0);
        v[row][col]='.';
        helper(v,row,col+1);
    }
    else if(!isSafe(v,row,col) || v[row][col]=='*'){
        helper(v,row,col+1);
    }
}

int main()
{
    int n=8;
    vector<string> v;
    for(int i=0;i<n;i++){
        string temp="";
        for(int j=0;j<n;j++){
            char x;
            cin>>x;
            temp+=x;
        }
        v.push_back(temp);
    }
    helper(v);
    cout<<c<<endl;
    return 0;
}