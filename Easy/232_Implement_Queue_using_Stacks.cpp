// LeetCode 232 - Implement Queue using Stacks
// Amortized Time: O(1) per operation, Space: O(n)
class MyQueue {
private:
    stack<int> input, output;

    void moveIfNeeded() {
        if (output.empty()) {
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
    }

public:
    MyQueue() {}

    void push(int x) { input.push(x); }

    int pop() {
        moveIfNeeded();
        int value = output.top();
        output.pop();
        return value;
    }

    int peek() {
        moveIfNeeded();
        return output.top();
    }

    bool empty() {
        return input.empty() && output.empty();
    }
};