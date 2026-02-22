#pragma once
#include <iostream>
#include "worker.h"

//经理类
class Manager: public Worker{
    public:
        Manager(int id, std::string n, int dp);

        //显示个人信息
        void showInfo() override;
        //获取岗位名称
        std::string getDepName() override;
};