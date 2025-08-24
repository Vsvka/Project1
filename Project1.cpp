#include <iostream>
#include <cctype>   

using namespace std;


int strcmp_case_insensitive(const string str1, const string str2) {
    
    int i = 0;
    while (i < str1.length() && i < str2.length()) {
        char s1 = tolower(str1[i]);
        char s2 = tolower(str2[i]);

        if (s1 != s2) {
            return s1 - s2;  
        }
        i++;
    }

    
    return (int)str1.length() - (int)str2.length();
}

int main() {
    
    cout << strcmp_case_insensitive("dog", "Dog") << endl;      
    cout << strcmp_case_insensitive("12", "123") << endl; 
    cout << strcmp_case_insensitive("FEIHFIEH", "aheff") << endl; 
    cout << strcmp_case_insensitive("H OR SE", "d og") << endl;   
    cout << strcmp_case_insensitive("Apple", "applE") << endl;   
    cout << strcmp_case_insensitive("short1", "shorter") << endl; 
}