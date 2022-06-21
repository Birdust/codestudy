#include <iostream>
using namespace std;
#include "string"
int main() {

    int n, p;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> p;
        int C;
        string name;
        int max= 0;
        string print;
        for (int j = 0; j < p; j++) {
            cin >> C >> name;
            if (C > max) {
                max = C;
                print = name;
            }
        }
        cout << print << "\n";
    }
    return 0;
}
