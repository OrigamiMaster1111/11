#pragma once
#include <iostream>
#include <string>

class Worker{
    public:
        int ID;//职工编号
        std::string name;//姓名
        int departID;//部门名称编号

        //显示个人信息
        virtual void showInfo() = 0;
        //获取岗位名称
        virtual std::string getDepName() = 0;
        //纯虚析构函数
        virtual ~Worker() = default;
};