#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to handle the newline after integer input
    
    while (t--) {
        string inp;
        getline(cin, inp);  // read the full line (can include spaces)
        stringstream ss(inp);
        string w;
        
        while (ss >> w) {
            cout << w[0];
        }
        cout << "\n";
    }
    return 0;
}
