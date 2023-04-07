# 2.2节练习：  
## 练习2.9：解释下列定义的含义。对于非法的定义，请说明错在何处并将其改正
(a)std::cin >> int input value;  
定义非法，需要一个变量接收输入值，而不是新定义一个变量  
(b)int i={3.14};  
报错：转换未执行，因为存在丢失信息的危险  
作为 C++11 新标准的一部分，用花括号来初始化变量得到了全面应用，而在此之前，这种初始化的形式仅在某些受限的场合下才能使用。出于 3.3.1节(第88页)将要介绍的原因，这种初始化的形式被称为列表初始化 (list initialization)。现在，无论是初始化对象还是某些时候为对象赋新值，都可以使用这样一组由花括号括起来的初始值了  
当用于内置类型的变量时，这种初始化形式有一个重要特点:如果我们使用列表初始化且初始值存在丢失信息的风险，则编译器将报错  
(c)double salary=wage=9999.99;  
定义非法，定义salary之前，wage并没有被定义，因此无法识别。    
(d)int i = 3.14;  
定义合法，但精度损失

## 2.10:下列变量的初值分别是什么?
std::string global_str;
int global_int;
int main(){
    int local_int;
    std::string local_str;
}  
在C++中，如果没有显式地初始化一个变量，则它的值将会是未定义的（Undefined Behavior），这意味着它的值是不确定的，可能是任意值。因此，下列变量的初值是未定义的;  
如果这些变量被定义在函数外部，它们将被初始化为它们的默认值，例如：  
std::string的默认值是空字符串（""）  
int的默认值是0  

## 练习2.11:指出下面的语句是声明还是定义:
(a)extern int ix=1024;  
声明并定义  
(b)int iy;  
声明并定义  
(c)extern int iz;  
声明而非定义  

## 练习2.12:请指出下面的名字中哪些是非法的?
(a)int double=3.14;  
非法  
(c)int catch-22;
非法
(b)int _;  
合法  
需要注意的是，虽然这个变量名是合法的，但是它可能会在代码阅读和调试过程中造成困惑，因为它没有描述变量的含义。因此，建议使用更具有可读性的变量名  
(d)int 1_or_2=1;
非法
(e)double Double=3.14;
合法，但不推荐  
在C++中，变量名只能由字母、数字和下划线组成，并且第一个字符必须是字母或下划线。因此，catch-22不是一个合法的变量名。  

## 练习2.13:下面程序中j的值是多少?
```
int i=42;
int main(){
    int i =100;
    int j=i;
}
```
j = 100

## 练习2.14:下面的程序合法吗?如果合法，它将输出什么?
```
int i = 100，sum = 0;
for (int i=0; i!= 10;++i){
    sum +=i;
}
std::cout<<i<<" "<<sum<<std::endl;

```
i == 10;  
sum == 45;  