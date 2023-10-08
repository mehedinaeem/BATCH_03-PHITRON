//here use Binary search for get it in log n bcz it pre sorted

#include<bits/stdc++.h>
using namespace std;

void Binary_search(vector<int> &v,int val,int l,int h)
{
    int flag=0;
    int index;
    while(l<=h)
    {
        int mid=(l+h)/2;
        flag=0;

        if(v[mid]==val)
        {
            flag++;
            index=mid;
            break;
        }
            
        else if(val<v[mid])
            h=mid;

        else
            l=mid+1;
    }

    if(v[index+1]==val || v[index-1]==val)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;


        

}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n); 
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int x;
    cin>>x;
    Binary_search(v,x,0,n-1);
    return 0;
}