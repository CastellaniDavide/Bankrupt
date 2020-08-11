#include <bits/stdc++.h>

#define ll long long

using namespace std;


int main()
{
//  uncomment the following lines if you want to read/write from files
//  freopen("input2.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

    // SE NON SI METTE TUTTO DI TIPO "long long" NON FUNZIONA

    ll N, i;

    cin >> N;

    ll X[N], Y[N];

    for (i=0; i<N; i++)
        cin >> X[i] >> Y[i];


    ll area = 0;

    // Utilizzo la shoelace formula
    ll prev = N - 1;
    for (i = 0; i < N; i++)
    {
        area += (X[prev] + X[i]) * (Y[prev] - Y[i]);
        prev = i;
    }

    area = abs(area) / 2;

    cout << area <<endl;

    return 0;
}
