//collect from cf

#include <bits/stdc++.h>
using namespace std;
int main()
{   int test;
    cin>>test;
    for(int k=0;k<test;k++){
    int n;
    cin>>n;
    char c[n];
    cin>>c;
    int yey=0;
    int count[26]={0};
    for(int i=0;i<n;i++){
        int hey=c[i]-'A';
        //cout<<
        count[hey]++;
 
    }
    for(int i=0;i<26;i++){
            
            if(count[i]>0){
                yey=yey+count[i]+1;
            }
            else{
                yey=yey+count[i];
            }
            //cout<<count[i]<<endl;
            
            //cout<<"yey---"<<yey<<endl;
    }
    cout<<yey<<endl;
    }
    return 0;
}