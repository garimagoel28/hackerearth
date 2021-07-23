/*
Link for problem:
    https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/simon-cant-sleep-3beb3241/
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    string hr = "";
    hr += str[0];    
    hr += str[1];    

    string min = "";
    min += str[3];
    min += str[4];

    int t1 = stoi(hr);
    int t2 = stoi(min);

    int time = (60 * t1) + t2;
    cout << round((float(time) * 11) / 720);

    return 0;
}

/*

LOGIC OF PROBLEM -->

1 day = 24 hours.

Minute hand:-

In 60 minutes covers 360 degree, so speed of minute hand is 6 degree per minute.

Hour hand:-

In 12 hours covers 360 degree, so speed of hour hand is 30 degree per hour or 1/2 degree per minute.

Angular relative speed between minute and hour hand = 6–1/2 = 11/2 degree per minute.

Let’s see when do minute hand and hour hand overlap, basically start with a reference of 12:00 AM, At this point both are at same position but will now move at different speed. They will overlap at the point when the relative speed between them covers the angular distance of 360 degree.

So, time = angular distance/angular relative speed = 360/ (11/2) = 720/11 minutes.

In every 720/11 minute, the two hands overlap.

So, the number of times the two hands overlap will be equal to number of such minutes in 24 hour duration (24*60 minutes). i.e equal to 24 *60/ (720/11) which is

24 * 60 * 11/720 = 22 times.

(Source: Quora)
*/