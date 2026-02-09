// Reverse words in a string by using Stacks

#include <iostream>
#include <stack>
using namespace std;

void reverseWords(string str){
    stack<string> st;

    for(int i=0; i<str.length(); i++){
        string word = "";
        while(i < str.length() && str[i] != ' '){
            word += str[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

void reverseString(string str){
    stack<char> st;
    for(int i=0; i<str.length(); i++){
        st.push(str[i]);
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main(){
    string str = "Hello, how are you?";

    reverseWords(str);
    reverseString(str);
}