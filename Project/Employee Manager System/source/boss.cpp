#include "../head/boss.h"

Boss::Boss(int id, std::string n, int dp){
    ID = id;
    name = n;
    departID = dp;
}

void Boss::showInfo(){
    std::cout << "职工编号：" << ID
              << "\n职工姓名：" << name
              << "\n岗位：" << "老板"
              << "\n岗位职责：管理公司事务\n" << std::endl;
}

std::string Boss::getDepName(){
    return std::string("老板");
}