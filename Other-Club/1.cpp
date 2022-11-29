#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

string delSpaces(string &str)
{
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    return str;
}

int main(){
    string time0 = "10d16 minutes5s";
    string time;
    vector <int> day;
    vector <int> hour;
    vector <int> minute;
    vector <int> second;
    time = delSpaces(time0);
    cout << time << endl;


    int days = 0, hours = 0, minutes = 0, seconds = 0;
    bool day1 = false, hour1 = false, minute1 = false, second1 = false;


    for (int i = 0; i < time.length(); i++) {
        if (time[i] == 'd' || time[i] == 'D') {
            day1 = true;
        } else if (time[i] == 'h'|| time[i] == 'H') {
            hour1 = true;
        } else if (time[i] == 'm' || time[i] == 'M') {
            minute1 = true;
        } else if (time[i] == 's' || time[i] == 'S') {
            second1 = true;
        }
    }
    int count = 0;
    if (day1) {
        for (char i: time) {
            count ++;
            if (isdigit(i)) {
                int day2 = i - '0';
                day.push_back(day2);
            }
            else if (i == 'd' || i == 'D') {
                break;
            }

        }
    }
    if (hour1) {
        for (int i = count; i < time.length(); i++) {
            count ++;
            if (isdigit(time[i])) {
                int hour2 = time[i] - '0';
                hour.push_back(hour2);
            }
            else if (time[i] == 'h' || time[i] == 'H') {
                break;
            }
        }
    }
    if (minute1) {
        for (int i = count; i < time.length(); i++) {
            count ++;
            if (isdigit(time[i])) {
                int minute2 = time[i] - '0';
                minute.push_back(minute2);
            }
            else if (time[i] == 'm' || time[i] == 'M') {
                break;
            }
        }
    }
    if (second1) {
        for (int i = count; i < time.length(); i++) {
            count ++;
            if (isdigit(time[i])) {
                int second2 = time[i] - '0';
                second.push_back(second2);
            }
        }
    }
    for (int i = 0; i < day.size(); i++) {
        days += day[i] * pow(10, day.size() - i - 1);
    }
    for (int i = 0; i < hour.size(); i++) {
        hours += hour[i] * pow(10, hour.size() - i - 1);
    }
    for (int i = 0; i < minute.size(); i++) {
        minutes += minute[i] * pow(10, minute.size() - i - 1);
    }
    for (int i = 0; i < second.size(); i++) {
        seconds += second[i] * pow(10, second.size() - i - 1);
    }
    int total = days * 86400 + hours * 3600 + minutes * 60 + seconds;
    cout << total << endl;
}