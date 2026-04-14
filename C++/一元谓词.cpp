#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//一元谓词

class GreateFive{
    public:
        bool operator()(int val){
            return val > 5;
        }
};

void test01(){
    vector<int> v;
    for (int i = 0; i < 10; ++i){
        v.push_back(i);
    }

    //查找容器中有无 >5 的数字
    //GreateFive()  匿名函数对象
    auto it = find_if(v.begin(), v.end(), GreateFive());
    if (it == v.end()){
        cout << "didn't find" << endl;
    }
    else {
        cout << "had find the number greater than 5 :" << *it << endl;
    }
}

int main(){

    test01();

    return 0;
}