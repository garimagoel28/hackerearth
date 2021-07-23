/*
Link for question -->
    https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/divisibe-or-2d8e196a/
*/

#include <bits/stdc++.h>
using namespace std;

int firstDigit(int n)
{
    while (n >= 10)
        n /= 10;
    return n;
}

int lastDigit(int n)
{
    return (n % 10);
}

void divisible_check(int n, int arr[])
{
    int sum = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (i % 2 == 0)
            sum += firstDigit(arr[i]);
        else
            sum -= firstDigit(arr[i]);
    }
    for (int i = n / 2; i < n; i++)
    {
        if (i % 2 == 0)
            sum += lastDigit(arr[i]);
        else
            sum -= lastDigit(arr[i]);
    }
    sum % 11 == 0 ? cout << "OUI" : cout << "NON";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    divisible_check(n, arr);
}