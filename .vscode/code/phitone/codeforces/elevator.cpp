#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
  for(int i=0;i<t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
    int  time_first=abs(a-1);
    int time_second=abs(b-1)+abs(c-b)+1;
if (time_first<time_second)
{
    cout<<" 1 ";
}
else if (time_second<time_first)
{
    cout<<" 2 ";

}
else
    cout<<" 3 ";

}}}