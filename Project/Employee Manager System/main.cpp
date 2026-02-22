#include "./head/workerManager.h"

int main(){
    //实例化管理者对象
    WorkerManager wm;
    int choice = 0;


    while(true){
        
        //展示菜单
        wm.showMenu();
        cout << "请输入你的选择：";
        cin >> choice;//接收用户的选项

    
        switch (choice){
            case 0://退出系统
                wm.exitSystem();
                break;

            case 1://添加职工
                wm.addEmp();
                break;

            case 2://显示信息
                wm.showAllEmp();
                break;

            case 3://删除职工
                wm.delEmp();
                break;

            case 4://修改信息
                wm.modEmp();
                break;

            case 5://查找职工
                wm.findEmp();
                break;

            case 6://编号排序
                wm.sortEmp();
                break;

            case 7://清空文档
                wm.clean_file();
                break;

            default:
                system("cls");//清屏操作
                break;
        }
    }

    system("pause");

    return 0;

}