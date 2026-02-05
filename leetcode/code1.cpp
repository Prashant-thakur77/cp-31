#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<double> st;
    string postfix;
    cout << "Enter postfix expression: ";
    getline(cin, postfix);
    unordered_map<char, double> value;
    char ch;
    for (char c : postfix) {
        if (isalpha(c) && value.find(c) == value.end()) {
            cout << "Enter value of " << c << ": ";
            cin >> value[c];
        }
    }
    for (char c : postfix) {
        if (isalpha(c)) {
            st.push(value[c]);
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/') {
            double op2 = st.top(); st.pop();
            double op1 = st.top(); st.pop();

            switch (c) {
                case '+': st.push(op1 + op2); break;
                case '-': st.push(op1 - op2); break;
                case '*': st.push(op1 * op2); break;
                case '/': st.push(op1 / op2); break;
            }
        }
    }
    cout << "Result = " << st.top();
    return 0;
}