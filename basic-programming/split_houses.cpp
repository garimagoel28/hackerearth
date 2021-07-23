/*
Link for question -->
    https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/split-house-547be0e9/
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string str;
    cin >> str;
    int x = 1;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'H' && str[i + 1] == 'H')
        {
            x = 0;
            break;
        }
    }
    if (x == 0)
        printf("NO");
    else
    {
        
        for (int i = 0; i < str.length(); i++)
        {
            if(str[i] == '.')
                str[i]='B';
        }
        cout << "YES\n" << str;
    }

    return 0;
}