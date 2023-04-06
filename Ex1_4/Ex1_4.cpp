// Ex1_4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int Ex1_9() {
    int count = 50;
    int sum = 0;
    while (count <= 100) {
        sum = sum + count;
        count++;
    }
    std::cout << sum<<std::endl;
    return sum;
}
int Ex1_10() {
    int count = 10;
    for (count = 10; count >= 0; count--) {
        printf("%d ", count);
    }
    return 0;
}
int Ex1_11() {
    std::cout << "请输入两个整数：" << std::endl;
    int v1;
    int v2;
    std::cin >> v1 >> v2;
    for (int i = v1; i <= v2; i++) {
        printf("%d ", i);
    }
    return 0;
}
void Ex1_16() {
    std::cout << "请输入一组数：" << std::endl;
    double v_buff;
    double v_sum = 0;
    while (std::cin >> v_buff) {
        v_sum += v_buff;
        printf("v_sum == %f\n", v_sum);
    }
    

}
int main()
{
    std::cout << "Hello World!\n";
    int v1 = Ex1_9();
    int v2 = Ex1_10();
    int v3 = Ex1_11();
    Ex1_16();
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
