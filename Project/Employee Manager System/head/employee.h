#pragma once
#include "worker.h"
#include <iostream>

//员工类
class Employee: public Worker{
    public:
        //构造函数
        Employee(int id, std::string n, int dp);

        //显示个人信息
        void showInfo() override;

        //获取职工岗位名称
        std::string getDepName() override;
};