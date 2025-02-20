class MedianFinder {
    priority_queue<int, vector<int>, less<int>> pq1; 
    priority_queue<int, vector<int>, greater<int>> pq2;

public:
    MedianFinder() {}

    void addNum(int num) {
        pq1.push(num);
        if (!pq2.empty() && pq1.top() > pq2.top()) {
            pq2.push(pq1.top());
            pq1.pop();
        }
        if (pq1.size() > pq2.size() + 1) {
            pq2.push(pq1.top());
            pq1.pop();
        }
        if (pq2.size() > pq1.size() + 1) {
            pq1.push(pq2.top());
            pq2.pop();
        }
    }

    double findMedian() {
        if (pq1.size() == pq2.size()) {
            return (pq2.top() + pq1.top()) / 2.0;
        } else if (pq1.size() > pq2.size()) {
            return pq1.top();
        } else {
            return pq2.top();
        }
    }
};