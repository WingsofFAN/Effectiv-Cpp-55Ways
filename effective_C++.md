## 将 C++ 视为 federation of languages（语言联合体）
* effective C++ programming（高效 C++ 编程）规则的变化，依赖于你使用 C++ 的哪一个部分。
## 用 consts, enums 和 inlines 取代 #defines
* 对于 simple constants（简单常量），用 const objects（const 对象）或 enums（枚举）取代 #defines。
* 对于 function-like macros（类似函数的宏），用 inline functions（内联函数）取代 #defines。
## 只要可能就用 const
* 将某些东西声明为 const 有助于编译器发现使用错误。const 能被用于任何 scope（范围）中的 object（对象），用于 function parameters（函数参数）和 return types（返回类型），用于整个 member functions（成员函数）。
* 编译器坚持 bitwise constness（二进制位常量性），但是你应该用 conceptual constness（概念上的常量性）来编程。（此处原文有误，conceptual constness为作者在本书第二版中对 logical constness 的称呼，正文中的称呼改了，此处却没有改。其实此处还是作者新加的部分，却使用了旧的术语，怪！——译者注）
* 当 const 和 non-const member functions（成员函数）具有本质上相同的实现的时候，使用 non-const 版本调用 const 版本可以避免 code duplication（代码重复）。
## 确保 objects（对象）在使用前被初始化
* 手动初始化 built-in type（内建类型）的 objects（对象），因为 C++ 只在某些时候才会自己初始化它们。
* 在 constructor（构造函数）中，用 member initialization list（成员初始化列表）代替函数体中的 assignment（赋值）。initialization list（初始化列表）中 data members（数据成员）的排列顺序要与它们在 class（类）中被声明的顺序相同。
* 通过用 local static objects（局部静态对象）代替 non-local static objects（非局部静态对象）来避免跨 translation units（转换单元）的 initialization order problems（初始化顺序问题）。