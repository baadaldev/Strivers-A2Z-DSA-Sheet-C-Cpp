#include <iostream>
#include <vector>

std::vector<std::vector<int>> generatePascal(int numRows) {
    std::vector<std::vector<int>> ans;
    for (int i = 0; i < numRows; i++) {
        std::vector<int> row(i + 1, 1);
        for (int j = 1; j < i; j++) {
            row[j] = ans[i - 1][j - 1] + ans[i - 1][j];
        }
        ans.push_back(row);
    }
    return ans;
}
int main() {
    auto p = generatePascal(5);
    for (const auto& r : p) {
        for (int x : r) std::cout << x << " ";
        std::cout << "\n";
    }
    return 0;
}
