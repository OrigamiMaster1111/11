#include <iostream>
#include <string>
using namespace std;

class MyAdd{
    public:
        int operator()(int v1, int v2){
            return v1 + v2;
        }
};

void test01(){
    MyAdd myAdd;
    cout << myAdd(10, 10) << endl;
}

class MyPrint{
    public:
        int count;
        MyPrint(){
            count = 0;
        }

        void operator()(string test){
            cout << test << endl;
            ++count;
        }
};

void test02(){
    MyPrint myPrint;
    myPrint("hello world");
    myPrint("hello world");
    myPrint("hello world");
    myPrint("hello world");
    cout << myPrint.count << endl;
}

void doPrint(MyPrint &mp, string test){
    mp(test);
}

void test03(){
    MyPrint mp;
    doPrint(mp, "Hello C++");
}

int main(){

    test01();
    test02();
    test03();

    return 0;
}