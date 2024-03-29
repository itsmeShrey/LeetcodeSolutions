class RandomizedSet {
public:
    set<int>s;
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if(s.find(val)==s.end()){
            s.insert(val);
            return true;
        }
        else{
            return false;
        }
    }
    
    bool remove(int val) {
        if(s.find(val)==s.end()){
            return false;
        }
        else{
            s.erase(val);
            return true;
        }
    }
    
    int getRandom() {
        int c=*next(s.begin(),rand()%s.size());
        return c;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */