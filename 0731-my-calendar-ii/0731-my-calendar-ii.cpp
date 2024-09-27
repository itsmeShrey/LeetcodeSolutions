class MyCalendarTwo {
public:
    map<int, int> pointFreq;
    bool causingTripleBooking(int start, int end) {
        int overlapCnt = 0;
        for (auto& entry : pointFreq) {
            overlapCnt += entry.second;
            if (overlapCnt > 2) {
                pointFreq[start]--;
                pointFreq[end]++;
                return true;
            }
        }
        return false;
    }
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        pointFreq[start]++;
        pointFreq[end]--;
        if (causingTripleBooking(start, end)) return false;
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */