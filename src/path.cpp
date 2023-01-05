#include <fstream>
#include <iostream>
#include <string>

int path(std::string boot_path, std::string root_path, std::string home_path)
{
    std::cout << "这是本程序使用的linux分区路径:\n"
              << "boot(or esp)分区" << boot_path << std::endl
              << "根(root or /)分区" << root_path << std::endl
              << "home分区" << home_path << std::endl;
}