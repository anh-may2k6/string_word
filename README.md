#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string temp;
        int count = 0;
        while(ss >> temp){
            cout << temp << endl;
            cout << temp.size() << endl;
            count++; 
        }
        cout << count << endl;
    }
}
