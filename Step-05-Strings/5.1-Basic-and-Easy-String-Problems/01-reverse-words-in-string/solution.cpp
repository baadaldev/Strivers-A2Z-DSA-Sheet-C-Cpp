#include <iostream>
#include <string>
#include <sstream>
#include <vector>

std::string reverseWords(const std::string& s) {
    std::stringstream ss(s);
    std::string word, ans = "";
    std::vector<std::string> words;
    while (ss >> word) words.push_back(word);
    for (int i = (int)words.size() - 1; i >= 0; i--) {
        ans += words[i] + (i > 0 ? " " : "");
    }
    return ans;
}
int main() {
    std::cout << reverseWords("the sky is blue") << std::endl;
    return 0;
}
