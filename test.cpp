#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v;
    int n,m;
    cin >> n >> m;
    vector<vector<int>> a(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
            v.push_back(a[i][j]);
        }
    }
    int max = *max_element(v.begin(),v.end());
    int min = *min_element(v.begin(),v.end());
    cout << max << " " << min << endl;
    return 0;
}