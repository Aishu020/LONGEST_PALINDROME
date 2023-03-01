#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    int i = 0, j = str.length() - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

string find_Longest_Palindrome(string str) {
    string longest_Palindrome = "";
    for (int i = 0; i < str.length(); i++) {
        for (int j = i+1; j <= str.length(); j++) {
            string substr = str.substr(i, j-i);
            if (isPalindrome(substr) && substr.length() > longest_Palindrome.length()) {
                longest_Palindrome = substr;
            }
        }
    }
    return longest_Palindrome;
}

int main() {
    string inputString;
    cout << "ENTER A STRING: ";
    getline(cin, inputString);
    string longest_Palindrome = find_Longest_Palindrome(inputString);
    cout << "THE LONGEST PALINDROME IN THE STRING IS:" << longest_Palindrome << endl;
    return 0;
}
