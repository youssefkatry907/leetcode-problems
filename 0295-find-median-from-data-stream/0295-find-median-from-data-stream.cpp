class MedianFinder {
public:
    priority_queue<int> mx;
    priority_queue<int, vector<int>, greater<int>> mn;
    MedianFinder() {}
    
    void addNum(int num) {
        mx.push(num);
        mn.push(mx.top());
        mx.pop();
        if(mx.size() < mn.size()){
            mx.push(mn.top()),mn.pop();
        }
    }
    
    double findMedian() {
        return mx.size() > mn.size() ? mx.top() : (mx.top() + mn.top()) / 2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */