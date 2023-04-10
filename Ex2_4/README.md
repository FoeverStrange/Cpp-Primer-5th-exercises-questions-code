# 2.4节练习：  
## 练习2.26：下面哪些句子是合法的?如果有不合法的句子，请说明为什么?
```
(a)const int buf;
// 不合法，const常量未初始化
(b)int cnt=0;
(c)const int sz= cnt;
// 合法
(d)++cnt; ++sz;
// ++sz不合法
```
## 练习2.27：