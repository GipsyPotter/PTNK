#include <iostream>


using namespace std;

int main() {
    int N, V, H;
    cin >> N >> V >> H;
    int a[N];
    int b[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < N; i++) {
        b[i] = a[i];
    }
    bool win = false, possible = false;
    int count = 0;
    for (int i = 0; i < N; i++){
        if (b[1] >= V){
            possible = true;
        }
    }
    while(possible){
        for (int i = 0; i < N; i++){
            b[i] -= V;
        }
        for (int i = 0; i < N; i++){
            b[i] += a[i];
        }
        for (int i = 0; i < N; i++){
            if (b[i] >= H){
                win = true;
                count ++;
            }
        }
        if (win){
            break;
        }
    }
    cout << count;
}
