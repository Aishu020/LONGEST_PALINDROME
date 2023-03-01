# LONGEST PALINDROME

PROBLEM STATEMENT:

Find the longest palindrome from the given string. Palindrome is a word, phrase, or sequence that reads the  same backwards as forwards, e.g. madam, civic, radar

![image](https://user-images.githubusercontent.com/85669685/222218325-94da97b0-9051-4a15-a2c6-c9b9e139f932.png)

Approching the problem by c++ programming.

ALGORITHM FOR FINDING LONGEST PALINDROME IN A STRING

Input: A string str.

Output: The longest palindrome in str.

Initialize a string variable longest_Palindrome to an empty string.

For each starting index i in str, from 0 to str.length()-1:

    For each ending index j in str, from i+1 to str.length():

        Extract a substring substr from str starting at index i and ending at index j-1.
        
        Check if substr is a palindrome by calling the isPalindrome function with substr as an argument.
        
        If substr is a palindrome and its length is greater than the length of longest_Palindrome, set longest_Palindrome to substr.
    
    Return longest_Palindrome.

Function isPalindrome:

Input: A string str.

Output: True if str is a palindrome, false otherwise.

Initialize two integer variables i and j to 0 and str.length()-1, respectively.

While i is less than j:
   
   If str[i] is not equal to str[j], return false.
   
   Increment i and decrement j.

Return true.
