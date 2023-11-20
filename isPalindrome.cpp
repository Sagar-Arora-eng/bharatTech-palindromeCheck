#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cout<<"Enter string to check : ";
    getline(cin, s); 

    string temp = s;
    reverse(s.begin(), s.end());
    if (temp == s) cout<<"YES, IT IS PALINDROME"<<endl;
    else cout<<"NO, IT IS NOT A PALINDROME"<<endl;

    return 0;
}