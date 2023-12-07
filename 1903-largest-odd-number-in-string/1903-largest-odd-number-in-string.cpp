class Solution {
public:
    string largestOddNumber(string num) {
      string s;int c=0;
      for(int i=num.length()-1;i>=0;i--){
        if((num[i]-48)%2!=0 && c==0){
          s+=num[i];
          c=1;
        }
        else if(c==1){
          s+=num[i];
        }
      }
      reverse(s.begin(),s.end());
      return s;
    }
};