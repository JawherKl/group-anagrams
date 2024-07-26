#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> anagramMap;
    
    for (const string& str : strs) {
        string sortedStr = str;
        sort(sortedStr.begin(), sortedStr.end());
        anagramMap[sortedStr].push_back(str);
    }
    
    vector<vector<string>> result;
    for (const auto& entry : anagramMap) {
        result.push_back(entry.second);
    }
    
    return result;
}

int main() {
    vector<string> strs1 = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> result1 = groupAnagrams(strs1);
    for (const auto& group : result1) {
        for (const auto& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }
    
    vector<string> strs2 = {""};
    vector<vector<string>> result2 = groupAnagrams(strs2);
    for (const auto& group : result2) {
        for (const auto& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

    vector<string> strs3 = {"a"};
    vector<vector<string>> result3 = groupAnagrams(strs3);
    for (const auto& group : result3) {
        for (const auto& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}
