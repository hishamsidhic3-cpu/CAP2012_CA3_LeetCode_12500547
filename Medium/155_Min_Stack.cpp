// LeetCode 155 - Min Stack
// Time: O(1) for every operation, Space: O(n)
class MinStack {
private:
    stack<pair<int, int>> st;

public:
    MinStack() {}

    void push(int val) {
        int currentMin = st.empty() ? val : min(val, st.top().second);
        st.push({val, currentMin});
    }

    void pop() { st.pop(); }

    int top() { return st.top().first; }

    int getMin() { return st.top().second; }
};