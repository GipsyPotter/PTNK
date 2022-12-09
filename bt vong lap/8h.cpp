#include <iostream>
#include <string>

using namespace std;

int main() {
    string n;
    uint64_t index;
    cin >> n;
    for (int i = 0; i < n.length(); i++) {
        if (n[i] != '0') {
            index = i;
        }

    }
    index = n.length() - index - 1;
    cout << index;
}