#include <bits/stdc++.h>
using namespace std;


int main() {
    string s;
    cin >> s;
    
    stack<char> st;
    int turns = 0;
    
    for (char c : s) {
        if (!st.empty() && st.top() == c) {
            st.pop();
            turns++;
        } else {
            st.push(c);
        }
    }
    
    if (turns % 2 == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
