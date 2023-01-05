#include <assert.h>
#include <conio.h>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string>
#include <tchar.h>
#include <windows.h>

int path(std::string boot_path, std::string root_path, std::string home_path);
int boot();
int downImage(int ch);
void open_url(std::string strurl);

int main(int argc, char *argv[])
{
    // 检测操作系统类型 --跨平台支持使用。
    // #ifdef _WIN32
    std::system("chcp 65001"); // 防止编码不同导致输出乱码
    // #endif

    std::system("title Arch Installation guide");
    // if (argc > 1 && (argv[1] == "path"))
    // {
    //     std::fstream pathf;
    //     pathf.open("path.txt"); // 储存的分区路径
    //     if (pathf.is_open() == false)
    //     {
    //         std::cout << "错误，请先运行主程序！！！\nError: Can't open file 'path.txt'";
    //         exit(1);
    //     }
    //     std::string path_boot, path_root, path_home;
    //     std::getline(std::cin, path_boot);
    //     std::getline(std::cin, path_root);
    //     std::getline(std::cin, path_home);

    //     path(path_boot, path_root, path_home);
    // }
    // else if (argc > 1 && (argv[1] == "boot"))
    // {
    //     boot();
    // }
    std::system("cls");
    std::cout << "嗨，本程序旨在通过简单交互界面引导用户对ArchLinux的安装过程有个初步印象\n"
              << "并及时指正用户的错误操作，防止正式安装时手误暴毙(bushi)\n";
    std::cin.get();
    std::system("cls");
    std::cout << "让我们开始吧，如果你有不会的地方，可以参考官网教程（中文）" << std::endl;
    std::cin.get();
    open_url("https://wiki.archlinuxcn.org/wiki/Installation_guide");
    std::cout << "首先，你需要准备Arch的镜像文件(废话)\n"
              << "您可在官网或镜像网站获取\n"
              << "输入：\t1.打开官网下载地址\n\t2.打开镜像(阿里源)下载地址\n\t3.软件内下载(中科大USTC源)\n\t0.取消"
              << std::endl;
    int downChoice = 0;
    std::cin >> downChoice;
    {
        int retn = downImage(downChoice);
        std::cin.get();
        std::cin.get();
        if (retn == 0)
        {
            std::cin.get();
        }
    }
    return 0;
}