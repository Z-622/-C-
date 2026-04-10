#include <iostream>
#include "MyTime.h"

int main() {
    // 测试1：默认构造
    std::cout << "测试1：默认构造（00:00）" << std::endl;
    MyTime t1;
    t1.output();

    // 测试2：正常时间构造
    std::cout << "\n测试2：正常时间（9:20）" << std::endl;
    MyTime t2(9, 20);
    t2.output();

    // 测试3：分钟超60（07:85 → 08:25）
    std::cout << "\n测试3：分钟超60（07:85）" << std::endl;
    MyTime t3(7, 85);
    t3.output();

    // 测试4：小时超24（25:23 → 01:23）
    std::cout << "\n测试4：小时超24（25:23）" << std::endl;
    MyTime t4(25, 23);
    t4.output();

    // 测试5：负数时间（00:-1 → 23:59）
    std::cout << "\n测试5：负数时间（00:-1）" << std::endl;
    MyTime t5(0, -1);
    t5.output();

    // 测试6：getHour、getMinute、getTotalMinutes
    std::cout << "\n测试6：获取时间属性（10:30）" << std::endl;
    MyTime t6(10, 30);
    std::cout << "小时: " << t6.getHour() << std::endl;
    std::cout << "分钟: " << t6.getMinute() << std::endl;
    std::cout << "总分钟数: " << t6.getTotalMinutes() << std::endl;

    // 测试7：setTime修改时间
    std::cout << "\n测试7：setTime修改时间（原10:30 → 14:45）" << std::endl;
    t6.setTime(14, 45);
    t6.output();

    return 0;
}