#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//二元谓词

class MyCompare{
    public:
        bool operator()(int v1, int v2){
            return v1 > v2;
        }
};

void test01(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    sort(v.begin(), v.end());
    for (auto it: v){
        cout << it << " ";
    }
    cout << endl;

    //使用函数对象，改变算法策略，改为升序
    sort(v.begin(), v.end(), MyCompare());
    for (auto it: v){
        cout << it << " ";
    }
    cout << endl;
}

int main(){

    test01();

    return 0;
}