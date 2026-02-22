#include "../head/employee.h"

Employee::Employee(int id, std::string n, int dp){
    ID = id;
    name = n;
    departID = dp;
}

void Employee::showInfo(){
    std::cout << "\n职工编号：" << ID
              << "\n职工姓名：" << name
              << "\n岗位：" << "普通员工"
              << "\n岗位职责：完成经理交给的任务\n" << std::endl;
}

std::string Employee::getDepName(){
    return std::string("普通员工");
}