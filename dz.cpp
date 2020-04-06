#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector <int> a){
     for (auto now : a)
     cout << now << " ";
     cout << endl;
};
int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++)
    cin >> a[i];
    while (next_permutation(a.begin(), a.end()))
    print(a);
    return 0;
}
