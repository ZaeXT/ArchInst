#include <assert.h>
#include <iostream>
#include <tchar.h>
#include <windows.h>

void open_url(std::string strurl);

int downImage(int ch)
{
    if (ch == 0)
    {
        return 0;
    }
    else if (ch == 1)
    {
        std::system("cls");
        std::cout << "您选择了 1.官网\n正在跳转...\n";
        open_url("https://archlinux.org/download/");
        return 1;
    }
    else if (ch == 2)
    {
        std::system("cls");
        std::cout << "您选择了 2.三方镜像\n是否跳转最新版？(Y/n)\n";
        std::string ch0s; // 瞎起的变量名，新手，见谅
        std::cin >> ch0s;
        if (ch0s == "n" || ch0s == "N" || ch0s == "No" || ch0s == "no" || ch0s == "Nope" || ch0s == "nope") // 合法但有病
        {
            open_url("https://mirrors.aliyun.com/archlinux/iso/");
        }
        else
        {
            open_url("https://mirrors.aliyun.com/archlinux/iso/latest/");
        }
        return 2;
    }
    else if (ch == 3)
    {
        std::system("cls");
        std::cout << "在做了，在做了——咕咕咕\n";
        return 3;
    }
    else
    {
        return 0;
    }
}