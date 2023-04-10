// Ex2_3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

void Ex2_18() {
    int i = 20;
    int* pi = &i;
    std::cout << *pi << std::endl;
    *pi = 11;
    std::cout << *pi << std::endl;
    std::cout << pi << std::endl;
}
void Ex2_20() {
    int i = 42;
    int* pl = &i;
    *pl = *pl * *pl;
    std::cout << *pl << std::endl;
}
int main()
{
    /*std::cout << "Hello World!\n";
    int d = 0, & r2 = d;
    double e = 2.1, & r1 = e;

    r2 = 1;
    printf("%d\n", d);
    r1 = r2;
    std::cout << r2 << std::endl;*/

    //int i，& ri = i;
    //i = 5;
    //ri = 10;
    ////std::cout << i << " " << ri << std::endl;
    //Ex2_20();
    int* ip, i, &r = i;
    i = 0;
    std::cout << r<< std::endl;

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
