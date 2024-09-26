class MyCalendar {
public:
    multiset<pair<int, int>>ml;
    MyCalendar() {
        
    }
    bool book(int start, int end) {
        auto it = ml.lower_bound({end, 0});

        if(it != ml.begin())
        {
            auto prev = it;
            prev--;
            if(prev->first > start) return false;
        }
        if(it != ml.end() and it->second < end) return false;
        ml.insert({end, start});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */