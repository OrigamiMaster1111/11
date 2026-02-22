#define FILENAME "empFile.txt"
#pragma once   //防止头文件重复包含
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include <iostream>
#include <fstream>
using std::cout, std::cin, std::fstream, std::endl, std::ofstream,
      std::ios;

class WorkerManager{
    public:
        //构造函数
        WorkerManager();
        //析构函数
        ~WorkerManager();

        //展示菜单
        void showMenu();

        //退出系统
        void exitSystem();

        //添加职工
        void addEmp();
                
        //保存文件
        void save();

        //统计人数
        int getEmpNum();

        //初始化员工
        void init_emp();

        //显示职工
        void showAllEmp();

        //按照职工编号判断职工是否存在，若存在返回职工在数组中的位置，反之返回-1
        int isExist(int id);

        //删除职工
        void delEmp();

        //修改职工
        void modEmp();

        //查找职工
        void findEmp();

        //排序职工
        void sortEmp();

        //清空文件
        void clean_file();


        int EmpNum;     //记录文件中的人数个数
        Worker **EmpArr;//员工数组指针
        bool fileEmpty; //标志文件是否为空
};