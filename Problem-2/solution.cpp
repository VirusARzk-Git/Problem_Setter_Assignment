#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int &x : a)
        cin >> x;
    for (int &x : b)
        cin >> x;
    map<int, int> cnt;
    int c = 0, mx = 0, d = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == 0 && b[i] == 0)
            c++;
        else if (a[i] == 0)
            continue;
        else if (b[i] % a[i] == 0)
            cnt[-b[i] / a[i]]++;
    for (auto &p : cnt)
        if (p.second > mx)
            mx = p.second, d = p.first;
    cout << c + mx << ' ' << d << endl;
}