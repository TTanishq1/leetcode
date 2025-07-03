#include<bits/stdc++.h>
using namespace std;
void two_sum(vector<int> &v){
    int trgt;
    cout<<"enter the target";
    cin>>trgt;
    for(int i=0 ;i<v.size()-1;i++){ //to avoid array out of bound
        for(int j=i+1 ;j<v.size();j++){
    if(v[i]+v[j]==trgt)
    cout<<i<<","<<j<<endl;
        }
}
}
int main(){
    vector<int> v;
    int n ,x;
    cin>>n;
   
    for(int i=0 ;i<n ;i++){
         cin>>x;
      v.push_back(x);
    }
    two_sum(v);
}
