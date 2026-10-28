#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    int n, x;
    cout << "请输入数字个数：";
    cin >> n;
    cout << "请输入 " << n << " 个整数：";
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    cout << "排序输出: ";
    for (auto num : v)
    {
        cout << num << " ";
    }
    cout << endl;

    auto last = unique(v.begin(), v.end());
    v.erase(last, v.end());

    cout << "去重输出: ";
    for (auto num : v)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}