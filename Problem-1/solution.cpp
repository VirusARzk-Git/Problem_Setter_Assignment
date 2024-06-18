#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int x;
    cin >> x;
    map<int, int> xorValues;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            xorValues[arr[i] ^ arr[j]]++;
    int result = 0;
    for (int i = 0; i < n; i++)
        result += xorValues[x ^ arr[i]];
    cout << result / 3 << endl;
}