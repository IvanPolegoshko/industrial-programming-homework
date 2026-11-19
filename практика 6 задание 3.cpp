#include <iostream>
#include <string>

using namespace std;

int main() {
    string current;
    int n;
    cin >> current >> n;

    for (int step = 1; step < n; step++) {
        string next_str = "";
        int i = 0;
        
        while (i < current.length()) {
            int count = 1;
            while (i + 1 < current.length() && current[i] == current[i + 1]) {
                count++;
                i++;
            }
            next_str += to_string(count) + current[i];
            i++;
        }
        current = next_str;
    }

    cout << current << "\n";

    return 0;
}