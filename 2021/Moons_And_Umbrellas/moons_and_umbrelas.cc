#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    for (int k=0 ; k<t ; ++k) {
        int x, y;
        cin >> x >> y;
        string s;
        cin >> s;

        int cost = 0;
        for (int i=0 ; i<s.length()-1 ; ++i) {
            if (s[i] == 'C' && s[i+1] == 'J') {
                cost += x;
            }
            else if (s[i] == 'J' && s[i+1] == 'C') {
                cost += y;
            }
        }

        for (int i=1 ; i<s.length()-1 ; ++i) {
            if (s[i] == '?') {
                if (s[i-1] == 'C' && s[i+1] == 'J') {
                    cost += x;
                    s[i] = 'C';
                }
                else if (s[i-1] == 'J' && s[i+1] == 'C') {
                    cost += y;
                    s[i] = 'C';
                }
            }
        }

        cout << "Case #" << k+1 << ": " << cost << endl;
    }

    return 0;
}
