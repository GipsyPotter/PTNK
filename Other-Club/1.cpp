#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string time;
    cin>>time;
    int day = 0, hour = 0, minute = 0, second = 0;
    bool day1 = false, hour1 = false, minute1 = false, second1 = false;
    for (int i = 0; i < time.length(); i++){
        if (time[i] == 'd') {
            day1 = true;
        }
        else if (time[i] == 'h') {
            hour1 = true;
        }
        else if (time[i] == 'm') {
            minute1 = true;
        }
        else if (time[i] == 's') {
            second1 = true;
        }
    }
    if (day1 == true) {
        for (int i = 0; i < time.length(); i++) {
            if (time[i] == 'd') {
                break;
            }
            else {
                day = day * 10 + (time[i] - '0');
            }
        }
    }
    if (hour1 == true) {
        for (int i = 0; i < time.length(); i++) {
            if (time[i] == 'h') {
                break;
            }
            else {
                hour = hour * 10 + (time[i] - '0');
            }
        }
    }
    if (minute1 == true) {
        for (int i = 0; i < time.length(); i++) {
            if (time[i] == 'm') {
                break;
            }
            else {
                minute = minute * 10 + (time[i] - '0');
            }
        }
    }
    if (second1 == true) {
        for (int i = 0; i < time.length(); i++) {
            if (time[i] == 's') {
                break;
            }
            else {
                second = second * 10 + (time[i] - '0');
            }
        }
    }
    int total = day * 86400 + hour * 3600 + minute * 60 + second;
    cout<<total<<endl;
}