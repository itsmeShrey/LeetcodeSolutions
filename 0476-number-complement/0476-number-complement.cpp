// class Solution {
// public:
//     int findComplement(int num) {
//         int bitlength=log2(num)+1;
//         int mask = (1 << bitlength) - 1;
//         return mask^num;
//     }
// };
class Solution{
    public:
        int findComplement(int num){
            if(num==1){
                return 0;
            }
            int mask=0;
            int temp=num;
            while(temp!=0) {
                mask=(mask<<1)|1;
                temp>>= 1;
            }
            return mask^num;
        }
};