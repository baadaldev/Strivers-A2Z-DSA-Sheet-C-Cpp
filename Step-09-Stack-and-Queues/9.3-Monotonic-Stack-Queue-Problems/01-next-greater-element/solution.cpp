#include <iostream>
#include <vector>
#include <stack>

std::vector<int> nextGreaterElements(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> nge(n);
    std::stack<int> st;
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= arr[i]) st.pop();
        nge[i] = st.empty() ? -1 : st.top();
        st.push(arr[i]);
    }
    return nge;
}
int main() {
    auto res = nextGreaterElements({4, 5, 2, 25});
    for (int x : res) std::cout << x << " ";
    std::cout << "\n";
    return 0;
}
