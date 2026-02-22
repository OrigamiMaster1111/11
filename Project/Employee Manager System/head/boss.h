#pragma once
#include <iostream>
#include "worker.h"

//经理类
class Boss: public Worker{
    public:
        Boss(int id, std::string n, int dp);

        //显示个人信息
        void showInfo() override;
        //获取岗位名称
        std::string getDepName() override;
};