#include "Complex.h"

int main() {
    // 测试1：缺省构造函数
    Complex c1;
    cout << "c1（缺省构造）: ";
    c1.output();
    cout << "c1 到原点距离: " << c1.getDistance() << endl;

    // 测试2：单参数构造函数（虚部为0）
    Complex c2(5);
    cout << "\nc2（单参数构造）: ";
    c2.output();
    cout << "c2 实部: " << c2.getReal() << "，虚部: " << c2.getImage() << endl;

    // 测试3：双参数构造函数
    Complex c3(3, -5);
    cout << "\nc3（双参数构造）: ";
    c3.output();
    cout << "c3 到原点距离: " << c3.getDistance() << endl;

    // 测试4：setValue修改值
    Complex c4;
    c4.setValue(2, 3);
    cout << "\nc4（setValue后）: ";
    c4.output();

    // 测试5：特殊虚部（1、-1、0）
    Complex c5(1, 1), c6(2, -1), c7(4, 0);
    cout << "\nc5（虚部1）: ";
    c5.output();
    cout << "c6（虚部-1）: ";
    c6.output();
    cout << "c7（虚部0）: ";
    c7.output();

    return 0;
}