class Solution {
    private:
    //checks the valid character
    bool valid(char ch){
        if( (ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9') ){
            return 1;
        }
        else return 0;
    }
    //conversion in lowercase
    char lower(char ch){
         if( (ch>='a' && ch<='z')||(ch>='0' && ch<='9') ){
            return ch;
         }else { 
            char temp= ch-'A'+'a';
         return temp;
         }
        
    }
    bool checkPal(string a){
        int i=0 ,j = a.length()-1;
        while(i<=j){
            if(a[i] != a[j]){
                return 0;
            }
            else i++; j--;

        }return 1;
    }
public:
    bool isPalindrome(string s) {
        int i=0 ;
        string temp="";
        for(int i=0 ; i<s.length() ; i++){
            if(valid (s[i])){
                temp.push_back(s[i]);
            }
        } 
        for (int i=0 ; i<temp.length();i++){
            temp[i] = lower (temp[i]);
            
        }return checkPal (temp);
    }
};