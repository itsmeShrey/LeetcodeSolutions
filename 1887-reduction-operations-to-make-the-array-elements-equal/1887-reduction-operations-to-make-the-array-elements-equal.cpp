class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        vector<int>v;
        v=nums;
        sort(v.begin(),v.end());
        int c=*min_element(v.begin(),v.end());
        map<int,int>m;
        for(auto l:v){
            m[l]+=1;
        }
        int count=0;int d=0;
        map<int,int>::reverse_iterator it;
        for(it=m.rbegin();it!=m.rend();++it){
            if(it->first==c){
                continue;
            }
            else{
                count+=d+it->second;
                cout<<count<<" ";
                d+=it->second;
                cout<<d<<endl;
            }
        }
        return count;
    }
};// 1 2 3 4 5 6 7 8 9 10
//count     d
//1         