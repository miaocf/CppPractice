#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

/* 注: 这里目录配置为在 exercise 下面进行编译。 生成的可执行文件放在 exercise/bin/xxx.exe 目录下
 * Build        : Ctrl + Shift + B
 * Build + Run  : F4
 * Debug        : F5 
 */ 

#define DEFAULT_VALUE 100

bool CMP(pair<string, int> a, pair<string, int> b)
{
    if (a.first > b.first) {
        return 1;
    } else if (a.first < b.first) {
        return 0;
    } else if (a.second < b.second) {
        return 1;
    } else if (a.second >= b.second) {
        return 0;
    }
}

static void VectorSort(void)
{
    vector<pair<string, int>> mapVec;
    mapVec.push_back(make_pair("b", 200));
    mapVec.push_back(make_pair("a", 200));
    mapVec.push_back(make_pair("b", 180));
    mapVec.push_back(make_pair("c", 600));
    for (auto i : mapVec) {
        cout << i.first << ":" << i.second << endl;
    }

    // 多条件排序
    cout << "After Mult condition sorting: " << endl;
    sort(mapVec.begin(), mapVec.end(), CMP);
    for (auto i : mapVec) {
        cout << i.first << ":" << i.second << endl;
    }
}


int main() 
{
    string str = "Vector parctic.";
    cout << str << endl;
    // 初始化
    vector<int> nums;
    // 初始化一个大小为3，元素全为 0 的 vector. 用 ( );
    vector<int> nums1(3);
    vector<int> nums2(3, DEFAULT_VALUE);
    // 初始化, 用 { } 
    vector<int> nums3{1, 3, 5};
    
    // 二维数组
    vector<vector<int>> dp;
    int m = 3;
    int n = 4;
    vector<vector<bool>> dp1(m, vector<bool>(n, true));

    // 成员函数, 增/删/查/改
    nums.push_back(100);
    nums.push_back(500);
    nums.push_back(300);
    nums.push_back(400);
    nums.push_back(333);
    nums.push_back(555);
    nums.push_back(200);

    // Loop
    for (auto i : nums) {
        cout << i << endl;
    }

    // 删除中间4 - 5 元素, 区间[4，6）
    nums.erase(nums.begin() + 4, nums.begin() + 6);
    // 删除元素后
    cout << "Erase [4, 6], nums = " << endl;
    for (auto i : nums) {
        cout << i << endl;
    }

    sort(nums.begin(), nums.end());

    // 排序后
    cout << "Aftor sort, nums = " << endl;
    for (auto i : nums) {
        cout << i << endl;
    }

    nums.pop_back();
    nums.empty();
    nums.size();
    nums.begin();
    nums.back();

    // 输出
    cout << "nums.size = " << nums.size() << ", nums.back() = " << nums.back() << endl;
    VectorSort();
    return 0;
}  