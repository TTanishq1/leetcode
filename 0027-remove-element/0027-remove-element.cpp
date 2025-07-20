class Solution {
public:
    int removeElement(vector<int>& v, int n) {
        int j=0;
        for(int i=0;i<v.size();i++){
            if (v[i]!=n){
               // swap(v[j],v[i]);
               v[j]=v[i];
                j++;
            }
        } return j;
    }
};