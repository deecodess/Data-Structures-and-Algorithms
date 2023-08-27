// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// bool isSubsequence(const string& sub, const string& seq) {
//     int subIndex = 0;
//     for (char c : seq) {
//         if (sub[subIndex] == c) {
//             subIndex++;
//             if (subIndex == sub.size()) {
//                 return true; 
//             }
//         }
//     }
//     return false;
// }

// vector<bool> checkSubsequences(const vector<string>& newPasswords, const vector<string>& oldPasswords) {
//     vector<bool> results;
    
//     for (const string& newPassword : newPasswords) {
//         bool isSubseq = false;
//         for (const string& oldPassword : oldPasswords) {
//             if (isSubsequence(newPassword, oldPassword)) {
//                 isSubseq = true;
//                 break;
//             }
//         }
//         results.push_back(isSubseq);
//     }
    
//     return results;
// }
// char incrementLetter(char letter) {
//     if (letter >= 'a' && letter < 'z') {
//         return letter + 1;
//     } else if (letter == 'z') {
//         return 'a';
//     }
//     return letter;
// }
// vector<string>checkSimiliarPasswords(vector<string>newPasswords, vector<string>oldPasswords){
    
//     for(int i=0;i<newPasswords.size();i++){
//         string s=newPasswords[i];
//         for(int j=0;j<s.length();j++){
//         s[j]=incrementLetter(s[j]);
//         }
//     }
//     vector<bool> results = checkSubsequences(newPasswords, oldPasswords);
//     vector<string> ans;
//     for(int i=0;i<results.size();i++){
//         if(results[i]==true){
//             ans.push_back("YES");
//         }
//         else{
//             ans.push_back("NO");
//         }
//     }
//     return ans;

// }
// int main() {
//     vector<string> newPasswords = {"aaaa", "bzz"};
//     vector<string> oldPasswords = {"bcd", "az"};
    
//     vector<string>results=checkSimiliarPasswords(newPasswords, oldPasswords);
    
//     for(int i=0;i<results.size();i++){
//         cout<<results[i]<<" ";
//     }
    
//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isSubsequence(string sub, string seq) {
    int subIndex = 0;
    for (char c : seq) {
        if (sub[subIndex] == c) {
            subIndex++;
            if (subIndex == sub.size()) {
                return true; 
            }
        }
    }
    return false;
}

vector<bool> checkSubsequences(vector<string>& newPasswords,vector<string>& oldPasswords) {
    vector<bool> results;
    
    for (const string& newPassword : newPasswords) {
        bool isSubseq = false;
        for (const string& oldPassword : oldPasswords) {
            if (isSubsequence(newPassword, oldPassword)) {
                isSubseq = true;
                break;
            }
        }
        results.push_back(isSubseq);
    }
    
    return results;
}

char incrementLetter(char letter) {
    if (letter >= 'a' && letter < 'z') {
        return letter + 1;
    } else if (letter == 'z') {
        return 'a';
    }
    return letter;
}

string incrementPassword(const string& password) {
    string newPassword = password;
    for (char c : newPassword) {
        c = incrementLetter(c);
    }
    return newPassword;
}

vector<string> checkSimilarPasswords(vector<string> newPasswords, vector<string> oldPasswords) {
    for (int i = 0; i < newPasswords.size(); i++) {
        newPasswords[i] = incrementPassword(newPasswords[i]);
    }
    
    vector<bool> results = checkSubsequences(newPasswords, oldPasswords);
    vector<string> ans;
    for (int i = 0; i < results.size(); i++) {
        if (results[i] == true) {
            ans.push_back("YES");
        } else {
            ans.push_back("NO");
        }
    }
    return ans;
}

int main() {
    vector<string> newPasswords = {"aaccbbee", "aab"};
    vector<string> oldPasswords = {"bdbf", "aee"};
    
    vector<string> results = checkSimilarPasswords(newPasswords, oldPasswords);
    
    for (int i = 0; i < results.size(); i++) {
        cout << results[i] << " ";
    }
    
    return 0;
}
