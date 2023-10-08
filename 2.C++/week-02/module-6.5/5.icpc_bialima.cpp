//from bialima2001 code
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int n,t;
  string s;
  
  cin>> n;
  for(int i=0; i<n; i++){
    vector<bool> V(26, false);
    cin>>t>>s;
    int cont = 0;
    for(int j=0; j<t; j++){
      if(V[s[j]-65]) cont++;
      else{
        V[s[j]-65] = true;
        cont+=2;
      }
    }
    cout<<cont<<"\n";
  }
  return 0;
}