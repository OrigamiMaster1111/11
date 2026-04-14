#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Worker{
    public:
        string name;
        int salary;
};

void setGroup(vector<Worker> &v, multimap<int, Worker> &m){
    for (auto it = v.begin(); it != v.end(); ++it){
        //产生随机部门编号
        int depID = rand() % 3; // 0 1 2
        //将员工插入到分组中
        m.insert(make_pair(depID, *it));
    }
}

void createWorker(vector<Worker> &v){
    string nameSeed = "ABCDEFGHIJK";
    for (int i = 0; i < 10; ++i){
        Worker worker;
        worker.name = string("员工") + nameSeed[i];

        worker.salary = rand() % 10000 + 10000;// 10000 ~ 19999
        //将员工放入容器
        v.push_back(worker);
    }
}

void showWorkerByGroup(multimap<int, Worker> &m){
    vector<multimap<int, Worker>::iterator> vDesign;
    vector<multimap<int, Worker>::iterator> vArt;
    vector<multimap<int, Worker>::iterator> vDev;
    for (auto it = m.begin(); it != m.end(); ++it){
        switch (it->first)
        {
            case 0:
                vDesign.push_back(it);
                break;
            
            case 1:
                vArt.push_back(it);
                break;
            
            case 2:
                vDev.push_back(it);
                break;
        }
    }

    for (int i = 0; i < 3; ++i){
        switch (i)
        {
            case 0:
                cout << "策划部门：" << endl;
                cout << "headcount: " << vDesign.size() << endl;
                for (auto worker: vDesign){
                    cout << "name: " << worker->second.name << " salary: " << worker->second.salary << endl;
                }
                break;

            case 1:
                cout << "美术部门：" << endl;
                cout << "headcount: " << vArt.size() << endl;
                for (auto worker: vArt){
                    cout << "name: " << worker->second.name << " salary: " << worker->second.salary << endl;
                }
                break;

            case 2:
                cout << "开发部门：" << endl;
                cout << "headcount: " << vDev.size() << endl;
                for (auto worker: vDev){
                    cout << "name: " << worker->second.name << " salary: " << worker->second.salary << endl;
                }
                break;
        }      
    }
    
}

void showWorkerByGroup2(multimap<int, Worker> &m){
    cout << "策划部门：" << endl;
    cout << "headcount: " << m.count(0) << endl;
    for (auto it: m){
        if (it.first == 0){
            cout << "name: " << it.second.name << " salary: " << it.second.salary << endl;
        }
    }

    cout << "美术部门：" << endl;
    cout << "headcount: " << m.count(1) << endl;
    for (auto it: m){
        if (it.first == 1){
            cout << "name: " << it.second.name << " salary: " << it.second.salary << endl;
        }
    }
    cout << "开发部门：" << endl;
    cout << "headcount: " << m.count(2) << endl;
    for (auto it: m){
        if (it.first == 2){
            cout << "name: " << it.second.name << " salary: " << it.second.salary << endl;
        }
    }
}

int main(){
    //1.创建员工
    vector<Worker> vW;
    createWorker(vW);

    //2.员工分组
    multimap<int, Worker> mW;
    setGroup(vW, mW);

    //3.分组显示员工
    showWorkerByGroup(mW);
    showWorkerByGroup2(mW);

    //测试
    // for (auto it = vW.begin(); it != vW.end(); ++it){
    //     cout << "name: " << it->name << " salary = " << it->salary << endl;
    // }

    return 0;
}