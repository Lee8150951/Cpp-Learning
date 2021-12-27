#include <iostream>
#include "string"
#define MAX 1000
using namespace std;

// 联系人结构体
struct Person {
    string m_Name;
    int m_Sex;
    int m_Age;
    string m_Phone;
    string m_Address;
};

// 通讯录结构体
struct AddressBooks {
    struct Person personArray[MAX];
    int m_Size;
};

// 添加联系人
void addPerson(struct AddressBooks * abs) {
    // 判断是否已满
    if (abs->m_Size == MAX) {
        cout << "通讯录已满" << endl;
        return;
    } else {
        // 姓名
        string name;
        cout << "请输入姓名：" << endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;
        // 性别
        int sex = 0;
        cout << "请输入性别：" << endl;
        cout << "1 --- 男" << endl;
        cout << "2 --- 女" << endl;
        while (true) {
            cin >> sex;
            if (sex == 1 || sex == 2) {
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;
            }
        }
        // 年龄
        int age = 0;
        cout << "请输入年龄：" << endl;
        cin >> age;
        abs->personArray[abs->m_Size].m_Age = age;
        // 电话
        string phone;
        cout << "请输入电话：" << endl;
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;
        // 地址
        string address;
        cout << "请输入住址：" << endl;
        cin >> address;
        abs->personArray[abs->m_Size].m_Address = address;
        // 更新通讯录人数
        abs->m_Size ++;
        cout << "添加成功！" << endl;
    }
}

// 显示联系人
void showPerson(struct AddressBooks abs) {
    if (abs.m_Size == 0) {
        cout << "当前记录为空" << endl;
    } else {
        for (int i = 0; i < abs.m_Size; i++) {
            cout << "姓名" << abs.personArray[i].m_Name << "\t";
            cout << "性别" << (abs.personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
            cout << "年龄" << abs.personArray[i].m_Age << "\t";
            cout << "电话" << abs.personArray[i].m_Phone << "\t";
            cout << "电话" << abs.personArray[i].m_Address << "\t";
        }
    }
}

// 检查联系人是否存在，不存在则返回-1
int isExist(struct AddressBooks * abs, string name) {
    for (int i = 0; i < abs->m_Size; i++) {
        if (abs->personArray[i].m_Name == name) {
            return i;
        }
    }
    return -1;
}

// 删除联系人
void deletePerson(struct AddressBooks * abs) {
    cout << "请输入需要删除的联系人姓名：" << endl;
    string name;
    cin >> name;
    int flag = isExist(abs, name);
    if (flag == -1) {
        cout << "查无此人" << endl;
    } else {
        for (int i = flag; i < abs->m_Size; i++) {
            abs->personArray[i] = abs->personArray[i + 1];
        }
        abs->m_Size --;
        cout << "删除成功" << endl;
    }
}

// 查询联系人
void findPerson(struct AddressBooks * abs) {
    cout << "请输入需要查询的联系人姓名：" << endl;
    string name;
    cin >> name;
    int flag = isExist(abs, name);
    if (flag == -1) {
        cout << "查无此人" << endl;
    } else {
        cout << "姓名" << abs->personArray[flag].m_Name << "\t";
        cout << "性别" << (abs->personArray[flag].m_Sex == 1 ? "男" : "女") << "\t";
        cout << "年龄" << abs->personArray[flag].m_Age << "\t";
        cout << "电话" << abs->personArray[flag].m_Phone << "\t";
        cout << "电话" << abs->personArray[flag].m_Address << "\t";
    }
}

// 编辑联系人
void editPerson(struct AddressBooks * abs) {
    cout << "请输入需要编辑的联系人姓名：" << endl;
    string name;
    cin >> name;
    int flag = isExist(abs, name);
    if (flag == -1) {
        cout << "查无此人" << endl;
    } else {
        // 姓名
        string name;
        cout << "请输入姓名：" << endl;
        cin >> name;
        abs->personArray[flag].m_Name = name;
        // 性别
        int sex = 0;
        cout << "请输入性别：" << endl;
        cout << "1 --- 男" << endl;
        cout << "2 --- 女" << endl;
        while (true) {
            cin >> sex;
            if (sex == 1 || sex == 2) {
                abs->personArray[flag].m_Sex = sex;
                break;
            }
        }
        // 年龄
        int age = 0;
        cout << "请输入年龄：" << endl;
        cin >> age;
        abs->personArray[flag].m_Age = age;
        // 电话
        string phone;
        cout << "请输入电话：" << endl;
        cin >> phone;
        abs->personArray[flag].m_Phone = phone;
        // 地址
        string address;
        cout << "请输入住址：" << endl;
        cin >> address;
        abs->personArray[flag].m_Address = address;
        cout << "修改成功！" << endl;
    }
}

// 清空联系人
void cleanPerson(struct AddressBooks * abs) {
    abs->m_Size = 0;
    cout << "已清空" << endl;
}

// 菜单界面
void showMenu() {
    cout << "*****1、添加联系人*****" << endl;
    cout << "*****2、显示联系人*****" << endl;
    cout << "*****3、删除联系人*****" << endl;
    cout << "*****4、查找联系人*****" << endl;
    cout << "*****5、修改联系人*****" << endl;
    cout << "*****6、清空联系人*****" << endl;
    cout << "*****0、退出通讯录*****" << endl;
}

int main() {
    // 创建通讯录
    struct AddressBooks abs;
    abs.m_Size = 0;
    int select = 0;
    while (true) {
        showMenu();
        cin >> select;
        switch (select) {
            // 添加联系人
            case 1:
                addPerson(&abs);
                break;
            // 显示联系人
            case 2:
                showPerson(abs);
                break;
            // 删除联系人
            case 3:
                deletePerson(&abs);
                break;
            // 查找联系人
            case 4:
                findPerson(&abs);
                break;
            // 修改联系人
            case 5:
                editPerson(&abs);
                break;
            // 清空联系人
            case 6:
                cleanPerson(&abs);
                break;
            // 退出
            case 0:
                cout << "欢迎下次使用" << endl;
                return 0;
        }
    }
    return 0;
}
