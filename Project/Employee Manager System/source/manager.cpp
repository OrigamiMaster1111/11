#include "../head/manager.h"

Manager::Manager(int id, std::string n, int dp){
    ID = id;
    name = n;
    departID = dp;
}

void Manager::showInfo(){
    std::cout << "职工编号：" << ID
              << "\n职工姓名：" << name
              << "\n岗位：" << "经理"
              << "\n岗位职责：完成老板交给的任务，并下发任务发给员工\n" << std::endl;
}

std::string Manager::getDepName(){
    return std::string("经理");
}