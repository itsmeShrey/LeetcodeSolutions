class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        vector<string>v;
        v=nums;
        vector<int>v1;
        for(int i=0;i<v.size();i++){
            bitset<64>b(v[i]);
            int x=b.to_ulong();
            v1.emplace_back(x);
        }
        for(auto l:v1){
            cout<<l<<" ";
        }
        int d;int c=v[0].length();
        for(int i=0;i<pow(2,c);i++){
            vector<int>::iterator it;  
            it=find(v1.begin(),v1.end(),i);
            if(it==v1.end()){
                d=i;
                break;
            }
        }
        cout<<endl;
        cout<<d;
        string s1;
        int binaryNum[v.size()];
        for(int i=0;i<v.size();i++)
        {
            binaryNum[i]=0;
        }
        // counter for binary array
        int i = 0;
        while (d > 0) {
    
            // storing remainder in binary array
            binaryNum[i] = d % 2;
            d = d / 2;
            i++;
        }
        for (int j = v.size() - 1; j >= 0; j--){
            s1+=to_string(binaryNum[j]);
        }
        if(v.size()==1 && v[0]=="0"){
            return "1";
        }
        else{
        return s1;
        }
    }
};