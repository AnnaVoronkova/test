#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct student {  //структура с параметрами ученика
    string last_name;
    string name;
    int math;
    int phis;
    int info;
};
bool cmp(student a, student b) { //компаратор для sort
    return (b.math + b.phis + b.info) < (a.math + a.phis + a.info);

}
int main() {
    int n;
    cin >> n;
    vector <student> a(n);
    for (int i = 0; i < n; i++){
         cin >> a[i].last_name >> a[i].name >> a[i].math >> a[i].phis >> a[i].info;
    }
    stable_sort(a.begin(), a.end(), cmp);
    for (auto now : a)
    cout << now.last_name << " " << now.name << endl;
    return 0;
}

