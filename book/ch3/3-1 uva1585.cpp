#include <iostream>
#include <string>

using namespace std;
int main() {
    int cnt = 0, ans = 0;
    int n = 0;
    string s;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>s;
        cnt=0;
        ans = 0;
        for (auto a : s){
            if (a == 'O') {
                cnt++;
                ans += cnt;
            } else if (a == 'X'){
                cnt = 0;
            }
        }
        cout<<ans<<endl;
    }


    return 0;
}
