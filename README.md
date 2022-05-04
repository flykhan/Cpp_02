# C++ 相关概念

| 概念         | 描述                                                         |
| ------------ | ------------------------------------------------------------ |
| 构造函数     | 类的构造函数是一种特殊的函数，在创建一个新的对象时自动调用   |
| 析构函数     | 类的析构函数也是一种特殊的函数，在删除所创建的对象时自动调用 |
| 拷贝构造函数 | 拷贝构造函数，是一种特殊的构造函数，它在创建对象时，是使用同一类中之前创建的对象来初始化新创建的对象 |
| 友元函数     | 友元函数可以访问类的 private 和 protected 成员               |
| 内联函数     | 通过内联函数，编译器试图在调用函数的地方扩展函数体中的代码   |
| 类成员函数   | 类的成员函数是指那些把定义和原型写在类定义内部的函数，就像类定义中的其他变量一样 |
| 类访问修饰符 | 类成员可以被定义为 public、private 或 protected。默认情况下是定义为 private |
| this 指针    | 每个对象都有一个特殊的指针 this，它指向对象本身              |
| 静态成员     | 类的数据成员和成员函数都可以被声明为静态的                   |

# 01——初识类与对象

- ## 自定义类（01_类与对象/Student.cpp）

类定义注意事项：

1. 定义一个类时，需要使用关键字 class 来进行修饰。
2. 一个简单的类可以没有构造函数和析构函数，但是系统自动生成一个默认的构造函数和析构函数。
3. 在类中使用关键字 public 、 private 和 protected 来限制数据成员和成员函数，一般使用 public 和 private 来修饰数据成员和成员函数。
4. 一般将数据成员封装在 private 关键字下，不让用户直接访问数据成员，而是通过成员函数来进行访问。
5. 在类的最后（大括号后）必须要有一个分号，勿忘。

- ## 实例化对象（01_类与对象/main01.cpp）

**实例化对象有两种方式，一种是在栈上实例化，另一种是在堆上实例化。**

实例化对象注意事项：

1. 在栈上实例化的对象，超出定义域对象资源会自动被系统回收。
2. 在堆上实例化的对象，最后需要使用 delete 关键字来释放内存，否则会造成内存泄漏。
3. 使用栈实例化的对象使用 “.” 来访问数据成员或成员函数，在堆上实例化的对象使用 “->” 来访问数据成员或成员函数。
4. 释放完内存后将对象置空，防止野指针。

- ## String

#### string 初始化方式

| 实例化                          | 解释                            |
| ------------------------------- | ------------------------------- |
| string s1;                      | s1 为空字符串                   |
| string s2("ABC");               | s2 初始值为 "ABC"               |
| string s3 = s2;  string s3(s2); | s3 初始化为 s2 的一个副本       |
| string s4(n, 'c' );             | s4 初始化为字符 'c' 的 n 个副本 |

#### string 常用操作

> 以下列出了 string 经常使用的操作，如果还需要用到其他操作可以在 [官网](https://en.cppreference.com/w/) 查找 string 类的相关使用方法，里面配有示例程序。

| 操作      | 解释                                                  |
| --------- | ----------------------------------------------------- |
| s.empty() | 判断 s 是否为空，如果 s 为空返回 true，否则返回 false |
| s.size()  | 返回 s 中字符的个数，和 s.length() 功能相同           |
| s[n]      | 返回 s 中位置 n 的字符，位置从 0 开始。切记不要越界   |
| s1 + s2   | 将 s1 和 s2 连接成新字符串，返回新字符串              |
| s1 = s2   | 赋值，将 s2 内容赋值给 s1                             |
| s1 == s2  | 判断相等，相等返回 true，否则返回 false               |
| s1 != s2  | 判断不等，不等返回 true，否则返回 false               |
| s.c_str() | 返回 char*，和 s.data() 功能相同                      |
| stoi()    | 字符串转 int，还有 stol()，stoll()                    |
| stof()    | 字符串转 float, 还有 stod()，stold()                  |

- ## 类外定义（01_类与对象/main.cpp、Student.cpp、Student.h）

类外定义有两种方式：

1. 同文件类外定义。
2. 分文件类外定义。

同文件类外定义就是将类的成员函数定义在类之外的地方，同时类的成员函数使用类作用域来进行定义。在实际项目开发中，类不是很复杂时可以使用该方法，类比较复杂时不推荐使用。

分文件定义类就是将类的定义放在 `xxx.h` 头文件中，而类的成员函数实现放在 `xxx.cpp` 文件中。这种做法是做项目时推荐使用的方法，因为这样将类的定义和成员函数分开后，在开发时很容易能够查找到对应的定义和成员函数。

一般情况下文件名和类名相同，便于开发时类管理。

# 02——类的封装

> C++ 使用关键字 class 来进行封装，使用 public、protected、private 关键字表示封装的状态。

#### 关键字

- class：对类进行封装。
- public：共有成员，用户能够直接访问类中 public 属性的数据成员和成员函数。
- protected：保护成员，用户不能直接访问数据成员和成员函数，继承该类后可以访问。
- private：私有成员，用户不能直接访问数据成员和成员函数。

#### 代码解释（02_类与封装/Student.cpp、Point.cpp、Cat.cpp）

- 示例代码 1 中，学生类 private 以下区域的数据成员 name 和 age 都属于私有数据成员，public 下的成员函数都是属于公有属性。
- 默认情况下，类的成员都是私有属性，例如示例代码 2 中 Point 类的数据成员 x 和 y 都是属于私有属性。
- struct 和 class 是类似的功能，但是 struct 默认情况下成员都是公有属性，如示例代码 3，struct 一般用于定义数据结构。
- 数据成员与成员函数绑定，不能直接对私有数据成员进行访问，如果需要访问数据成员则需要访问对应绑定的公有成员函数。

# 03——对象的生离死别

- ## 内存分区

#### 介绍

> 根据存储数据的类型，系统将不同类型的数据存储在不同的区域，作为 C++ 开发者，必须对内存的分区以及使用了然于心。

#### 分区

一般情况下，根据内存用途将内存划分为五个区：

| 内存区 | 用途解释                   |
| ------ | -------------------------- |
| 栈区   | 存储函数的参数、局部变量等 |
| 堆区   | 由程序员分配、释放内存     |
| 全局区 | 存储全局变量和静态变量     |
| 常量区 | 存储常量                   |
| 代码区 | 存储逻辑代码的二进制       |

#### 栈与堆对比

| 功能                 | 栈                                          | 堆                                                           |
| -------------------- | ------------------------------------------- | ------------------------------------------------------------ |
| 申请与释放           | 编译器自动分配、回收                        | 程序员分配和释放（C 使用 malloc 申请内存、free 释放内存；C++ 使用 new 申请内存、delete 释放内存） |
| 申请内存后系统的响应 | 申请空间大于栈空间时程序将提示异常 (栈溢出) | 超过内存空间程序报异常                                       |
| 空间大小限制         | window 1 M linux 8 M                        | 系统内存，比栈大很多                                         |
| 申请效率             | 快                                          | 比较慢                                                       |

#### 代码解释（03_对象的生离死别/Plan.cpp）

- 编译时 getWingCount 只存储一份。
- 实例化的对象 p1、p2、p3 存储在栈上。
- 当对象调用 getWingCount 成员函数只需要找到相应地址即可。
- 当变量没有被初始化时是一个随机值，建议所有变量都初始化。
- 示例代码 1 中数据在类默认私有属性区域，但一般建议添加封装属性关键字。

- ## 构造函数

> 定义：构造函数又称构造方法、建构子、构造器，是类里用于创建对象的特殊子程序。可以初始化一个新建的对象，并时常接受参数用以设定实例变量。

![img](README.assets/5d2fcadf9cc4c2d61664e9a3bf58adf0-0.png)

#### 规则与特点

- 对象实例化时自动被调用。
- 与类名同名。
- 没有返回值。
- 可以有多个重载形式。
- 实例化对象时仅用到一个构造函数。
- 当用户没有定义构造函数时，编译器自动生成。

- ## 拷贝构造函数（03_对象的生离死别/Teacher.cpp）

- 语法格式：`类名(const 类名 &变量)`。
- 如果没有自定义构造函数，系统自动生成。
- 采用直接初始化或赋值初始化实例化对象时系统自动调用拷贝构造函数。

注意：

- 拷贝构造函数也是构造函数的一种，当执行了拷贝构造函数后就不会执行其他构造函数。
- 如果不涉及深拷贝，可以不实现拷贝默认构造函数，使用系统自动生成的拷贝构造函数即可。

- ## 初始化列表（03_对象的生离死别/Circle.cpp）

- 先于构造函数执行。

- 只能用于构造函数。

- 可以同时初始化多个数据成员，多个数据成员之间使用逗号隔开。

  #### 注意：

- 语法格式：`类名() : 数据成员 1(参数), 数据成员 2(参数) {}`。
- 由于初始化列表先于构造函数执行，当类中有 const 常量时就必须要用到初始化列表来初始化。
- 推荐使用初始化列表的方式来初始化数据成员。
- 如果类中有数据成员时，推荐将数据成员都初始化。

# 04——对象与对象数组

> 假设定义了一个学生类，现在要实例化一个班的学生，如果逐个对学生进行实例化操作那肯定是非常麻烦的，这时使用对象数组就能很方便的完成编写。假设有一个点类，如果实例化一个矩形也可以使用对象数组的方式。

- ## 对象成员

#### 示例代码 （04_对象与对象数组/Line01.cpp）

首先看一下当对象 A 有对象 B 时调用构造函数与析构函数的顺序。

![1.4.4 objectArray_child.png](README.assets/11b227abf56cdbccb1df4dafddbec995-0-20220330114111199.png)

运行结果：可以看到先调用 pointA 的构造函数，再调用 pointB 的构造函数，最后调用 Line 的构造函数；而析构函数时正好反过来的。这也是为什么当对象成员没有默认构造函数时必须要使用初始化列表的原因，因为对象成员先于对象初始化。



#### 示例代码 （04_对象与对象数组/Line02.cpp）

> 如果将对象成员类型作为参数输入时看看其调用构造函数以及析构函数的顺序。

![img](README.assets/c08420378dc3a2a52de6f23c398759e1-0.png)

运行结果：对象成员类型作为参数传入时，传入的参数时会临时创建两个对象，初始化完成后临时对象自动销毁。

#### 示例代码 （04_对象与对象数组/Line03.cpp）

![1.4.6 objectArray_size.png](README.assets/a072e0c9d413650188bebe583f71bacf-0.png)

运行结果：p 指针占 4 字节，Line 类中有两个 Point 类数据成员，Point 类有两个 double 类型数据成员，所以 Line 一共占 32 个字节。

# 05——深拷贝与浅拷贝

什么时候会发生深拷贝或者浅拷贝？

答：调用拷贝构造函数时。

- 浅拷贝：将对象 A 中数据成员赋值给对象 B 中数据成员。
- 深拷贝：对象 B 先为数据成员申请对象 A 中数据成员同样大的内存，再将对象 A 中数据成员赋值给对象 B 中数据成员。

# 06——对象指针

- ## this 指针（06_对象指针/Array.cpp）

每个对象都可以通过this指针来访问自己的地址。this指针是所有成员函数的隐含参数。因此，在成员函数内部，它可以用来指向调用对象。

**注意：**友元函数没有this指针，因为友元不是类的成员。只有成员函数才有this指针。

运行结果：

- 当参数名称与数据成员名称相同时可使用 this 指针区分。
- 当参数名称与数据成员名称相同时可使用初始化列表，如示例代码 1 中 Point 类。
- 以上两种方式可以区分参数和成员函数，但建议不要起相同的名称。

- 返回对象指针或者引用时的成员函数可以连续访问。
- 引用返回 *this 而指针返回 this。

# 07——const常量

> const 是 constant 的缩写，本意是不变的，不易改变的意思。在 C++ 中是用来修饰内置类型变量、自定义对象、成员函数、返回值、函数参数。const 常量只能在初始化时进行赋值，此后 const 只有读权限。

const 允许指定一个语义约束，编译器会强制实施这个约束，允许程序员告诉编译器某值是保持不变的。如果在编程中确实有某个值保持不变，就应该明确使用 const。

- const 对象只能调用 const 成员函数，不能调用普通成员函数。
- const 指针和 const 引用对象都只能调用对象的常成员函数。
- 普通成员函数与 const 成员函数可以互为重载。
- 普通对象能调用 const 成员函数，也能调用普通成员函数。
- 常对象只能调用 const 成员函数，不能调用普通成员函数。
- 普通对象和 const 对象都可以访问公有数据成员。
- 自定义类型参数建议使用引用方式传递，可加 const 防止修改参数值。

# 08——Makefile应用

- ## Makefile基本语法规则

#### **基本规则**

```makefile
<target> : <prerequisites>
[tab] <commands>
```

或者

```makefile
<target> : <prerequisites> ; <commands>
[tab] <commands>
```

规则说明：

- 一般使用第一种类型规则。
- <font color=red>targets</font>：规则的目标，可以是Object File（一般称它为中间文件），也可以是可执行文件，还可以是一个标签。
- <font color=red>prerequisites</font>：是我们的依赖文件，要生成targets需要的文件或者是目标。可以是多个，也可以是没有。
- <font color=red>command</font>：make需要执行的命令（任意的shell命令）。可以有多条命令，每一条命令占一行。
- 在编写Makefile脚本时必须要严格遵守规则，否则可能无法使用。
- <font color=red>\<comands\></font>的前面必须是一个TAB，后面保证没有空格或者TAB。

#### **通配符**

- <font color=red>*</font>：匹配0个或者是任意个字符。

- <font color=red>？</font>：匹配任意一个（单个）字符。

- <font color=red>[ ]</font>：可以指定匹配的字符放在"[ ]"中。

#### **自动变量**

- <font color=red>$@</font>：表示规则的目标文件名。如果目标是一个文档文件（Linux中，一般称<font color=red>.a</font>文件为文档文件，也称为静态的库文件），那么它代表这个文档的文件名。在多目标模式规则中，它代表的是触发规则被执行的文件名。

- <font color=red>$ <</font>：规则的第一个依赖的文件名。如果是一个目标文件使用隐含的规则来重建，则它代表由隐含规则加入的第一个依赖文件。

- <font color=red>$^</font>：代表的是所有依赖文件列表，使用空格分隔。如果目标是静态库文件，它所代表的只能是所有的库成员名（<font color=red>.o</font>文件）。一个文件可重复的出现在目标的依赖中，变量<font color=red>$^</font>只会记录它的第一次引用的情况。也就是说变量<font color=red>$^</font>会去掉重复的依赖文件。

#### **函数**

- <font color=red>wildcard</font>：扩展通配符，获取文件列表。
- <font color=red>patsubst</font>：替换通配符，替换字符串。

# 09——为何继承

> 继承是C++中的特性之一，使用继承能够有效减轻工作量，使得开发更加高效。

- ## 什么是继承

![2.1 inherit.png](README.assets/c9325041e707e44ab3f3fad800972cd4-0-0888974.png)

- 被继承的类称为基类或者父类。
- 继承的类称为派生类或者子类。
- 继承时需要使用权限关键字 public、protected 或者 private，一般使用 public 继承较多。
- 在不使用权限关键字时，系统默认是 private 私有继承。
- 继承时派生类是基类的子集，基类是派生类的超集。

> 继承允许依据另一个类来定义一个类，这使得创建和维护一个应用程序变得更容易。也达到了重用代码功能和提高执行效率的效果。
>
> 如示例代码 1 中，Student 类继承了 Person 类，这样 Student 类可以快速的实现，在实际工程中效率比较显而易见。同时也要注意，采用继承的方式实际是将派生类和基类绑定在了一起，如果基类中存在问题，那么派生类也会出现问题。由于继承的优点大于缺点，在实际开发中，继承是经常会使用到的。

#### 优点

- 代码重用，提高开发效率。
- 明确层次结构关系，更易理解。
- 提高代码的扩展性，很多开源框架是通过继承基类完成的。

#### 缺点

- 耦合性大，即派生类会受到基类影响。
- 可能造成派生代码冗余，降低灵活性。在设计基类时考虑到移植、通用性等，而很多代码在派生类中可能是无用代码。
- 如果使用了多继承与多重继承，需要考虑多继承与多重继承的问题。

- ## 继承的内容

> public或者protected属性修饰权限的基类数据成员和成员函数。private属性的数据成员或者是成员函数不能被派生类继承。

# 10——继承方式

- ## 权限关键字使用位置

- 使用权限关键字有两个地方，一是在类中使用，二是在继承时使用。
- 继承时访问基类有三个可能，<u>一是派生类中，二是实例化派生类对象访问，三是实例化基类对象</u>，需要区分开。
- 在类中和继承时都可以使用 public、protected、private 关键字，那么在派生类中访问时就有九种访问组合，但实际上并没有那么多。
- 派生类中可以访问基类中 public 和 protected 属性数据成员和成员函数，不能访问 private 属性的数据成员和成员函数。
- 所有通过实例化基类或者派生类的对象只能访问对象的 public 属性数据成员和成员函数，不能访问 protected 和 private 属性数据成员和成员函数。

- ## 继承中的权限关键字

根据基类中数据成员或成员函数的属性以及继承方式的不同，派生类中有九种组合可能性来访问基类中的数据成员和成员函数。

| 基类成员访问属性 | 继承方式  | 派生类成员访问属性 |
| ---------------- | --------- | ------------------ |
| private 成员     |           | 无法访问           |
| protected 成员   | public    | protected          |
| public 成员      |           | public             |
| private 成员     |           | 无法访问           |
| protected 成员   | protected | protected          |
| public 成员      |           | protected          |
| private 成员     |           | 无法访问           |
| protected 成员   | private   | private            |
| public 成员      |           | privateÏ           |

- public 方式继承时，基类中 public 和 protected 属性的数据成员和成员函数将成为派生类中的 public 和 protected 属性的数据成员和成员函数，基类中 private 属性的成员在派生类中不可见。
- protected 方式继承时，基类中 public 和 protected 属性的数据成员和成员函数都将成为派生类中的 protected 属性的数据成员和成员函数，基类中 private 属性的成员在派生类中不可见。
- private 方式继承时，基类中的数据成员和成员函数将成为派生类中的 private 属性的数据成员和成员函数，基类中 private 属性的成员在派生类中不可见。
- 一般情况下<u>***开发中常使用 public 继承***</u>，因为继承就是要直接使用基类中的数据成员和成员函数。

# 11——继承中的关系

> 当派生类与基类中存在同名函数时，隐藏基类中的同名函数，这是 C++ 编译器的规则。

- ## 隐藏函数

- 派生类实例化的对象访问同名成员函数时只能访问到派生类中的成员函数。
- 通过指定类名也可以访问基类中的同名成员函数。
- 证明基类中同名函数只是被隐藏起来，并且通过指定类名仍然可以访问，并没有消失。
- 只要是同名就会隐藏，不管同名函数的返回值、参数类型或者参数个数是否不同。

- ## 隐藏数据成员

- 基类与派生类中数据成员重名时，隐藏基类中数据成员。
- 即使数据类型不同，基类中数据成员也将被隐藏。
- 基类中数据成员被隐藏后可以指定基类名来访问基类中数据成员。

- ## 成员函数与数据成员同名

- 基类数据成员与派生类成员函数同名时，隐藏基类中数据成员。
- 基类成员函数与派生类数据成员同名时，隐藏基类中成员函数。
- 只要基类中存在与派生类同名的成员，直接隐藏基类中成员。

- ## isA

- isA 这个概念是在继承的时候才会有的。
- isA 从字面上理解为：是一个。
- 假设 Student 类继承了 Person 类，Teacher 类也继承了 Person 类，那么从概念上不管是老师对象还是学生对象都可以理解为一个人的对象，这就是 isA。
- 如果反过来，条件不成立，即一个人不一定是老师或者学生。

> <u>***在实例化对象时可以运用 isA。***</u>

- 使用派生类实例化基类对象。
- 使用派生类对象给基类对象赋值。
- 不能使用基类对象初始化或赋值派生类对象。
- 使用派生类初始化或赋值基类后，基类对象只能访问基类中成员，不能访问派生类中成员，其本质还是基类。

- ## isA参数传递应用

#### isA 应用总结

- 使用基类作为参数传递时，直接传递产生临时变量，会耗费时间空间，而引用和指针传递不产生临时变量，所以推荐使用引用的方式作为参数传递，相对来说指针比较复杂所以不在推荐之列。
- 临时变量调用拷贝构造函数，使用时需要注意。
- 可以从案例运行结果中发现传递不管是基类还是派生类，其调用的都是 Person 类的 eat 函数，这也是为什么叫做 isA。
- 当派生类对象传递给基类参数时，其本质是构造一个基类对象或者使用派生类对象中基类部分。

- ## 虚析构函数

- > 虚析构函数是防止在使用继承时内存泄漏问题。

> 使用派生类实例化基类时，调用了基类和派生类的构造函数，但只调用基类的析构函数，这就可能会导致内存泄漏。

- 派生类实例化基类。
- 只调用基类的析构函数，没有调用派生类的析构函数。
- 如果在派生类中分配了内存，并且在析构函数中释放内存，那么会导致内存泄漏。

> 当在基类析构函数前加上 virtual 关键字后，释放内存时可以正常调用基类和派生类的析构函数。

- 基类中析构函数之前加 virtual 关键字。
- 在派生类中建议在析构函数前加 virtual 关键字，方便编程查看。
- 派生类中析构函数前不加 virtual 关键时，编译器默认会加上。
- 在编写基类时，建议都在析构函数之前加上 virtual 关键字，便是析构函数为虚析构函数。

# 12——多继承与多重继承

> 多继承与多重继承可以从字面上理解。即多继承有派生类继承了多个基类，多重继承是派生类的基类也是派生类。

![img](README.assets/a26b0b1187ced22accc0588fd48b74f0-0.png)

- ## 继承构造函数

> <u>**在继承时需要注意构造函数的编写，因为当基类的构造函数必须要传入参数时，在实现派生类构造函数时也必须要给基类传入参数，并且需要使用初始化列表的方式，并且不管是继承、多继承、多重继承都是如此。**</u>

- 由于基类要先于派生类调用构造函数，而初始化列表也先于构造函数执行，所以如果基类构造函数中有参数必须要使用初始化列表方式初始化基类。
- 如果继承多个基类，那么也需要使用初始化列表方式逐个初始化基类。
- 如果基类带参数，但有默认值时可以不用初始化。

# 13——虚继承

> 实际在开发的时候可能会遇到一种情况，既用到了多继承又用到了多重继承，这种继承方式通常又称为菱形继承。但这样一来就会产生新的问题，过多消耗空间。

- ## 菱形继承

#### 什么是菱形继承

菱形继承是继承中一种特殊的继承，如图中类 B 和 类 C 都继承自类 A，而类 D 又同时继承类 B 和类 C，这样就产生了一个菱形继承，如下图。

![2.5.1 virtual_inherit.png](README.assets/b84a22f74f3635a3c170d7047472d9ef-0.png)

#### 菱形继承产生的问题

菱形继承看似并没有什么问题，但是仔细想，类 B 和类 C 继承类 A 的时候都会将类 A 的成员继承下去，而类 D 同时继承类 B 和类 C 的时候，那就继承多份数据，这个时候就会产生一个问题，程序开销将会很大。

如果类 A 中数据成员很多，那么经过菱形继承后就会产生双倍的空间消耗。

![image-20220428163304582](README.assets/image-20220428163304582-1134787.png)

通过示例代码可以总结一下菱形继承的问题。

- 在初始化时，调用了两次 Person 的构造函数，也调用两次析构函数，说明在 HightStudent 对象存在两个 Person 对象。
- main 函数中分别调用 Student 和 Child 中继承的 print 函数，并且分别赋值给其基类中 Person 对象，这充分说明在 HightStudent 对象存在两个 Person 对象，这个在程序中是很大的开销。

- ## 虚继承

> 那么怎么解决空间消耗这个问题呢？
>
> 答：<u>***虚继承***</u>
>
> 虚继承简直是为了解决菱形问题而生，在继承基类时使用 **<u>virtual</u>** 关键字即可。

![image-20220428164313728](README.assets/image-20220428164313728-1135396.png)

> 运行结果：只修改 Student 和 Child 中继承方式。

- 在继承方式前面使用 virtual 关键字表示是虚继承。
- virtual 和 public 关键字可以互换位子，一般 virtual 在前。
- 在 Student 和 Child 类中使用虚继承后，通过运行结果发现程序只调用了一次 Person 的构造函数和析构函数。
- 同时在调用 print 函数时只打印了 Person 中 name 的默认值，也就是说传入 Person 的参数无效。

- ## 虚继承访问成员

> 通过虚继承后不仅是避免了消耗，而且使得 Person 类像是 HighStudent 类的普通基类一般，同样可以访问数据成员函数。

![image-20220428165524024](README.assets/image-20220428165524024-1136125.png)

运行结果：

- 直接调用 print 函数，不用指定类名，同样也可以指定类名方式访问。
- 通过虚继承后，Person 类中成员可以像访问普通基类一样访问。

# 14——虚函数以及实现原理

- ## 多态概念

#### 静态多态

静态多态又叫做早绑定，将不同特殊行为和单个泛化记号相关联，由于这种关联处理于编译期而非运行期，因此被称为 “静态”。可以用来实现类型安全、运行高效的同质对象集合操作。

静态多态表现的形式：

- 函数重载。
- 运算符重载。
- 带变量的宏多态。

#### 动态多态

动态多态又叫做晚绑定，生效于运行期。

定义：指相同对象收到不同消息或不同对象收到相同消息时产生动作的不同。

多态的语法核心是 virtual 关键字，必须使用 virtual 才能使多个类之间建立多态关系。

动态多态要素：

- 首先需要存在继承。
- 基类中使用 virtual 关键字修饰函数，派生类中重新实现该函数。
- 使用方法：`基类类型 变量名 = new 派生类对象(参数列表);`

#### 为什么要使用多态

> 多态的好处在于可以代码复用，提高开发效率。

- 提高程序的扩展性。
- 提高程序的维护性。

- ## 虚析构函数与虚函数

![image-20220428175417471](README.assets/image-20220428175417471-1139660.png)

运行结果：

- 虚析构函数与虚函数可以算是一种类型，但是在执行会有一定区别，虚析构函数在执行时是执行基类和派生类的析构函数都执行，虚函数是执行派生类中相应的虚函数。
- <u>**如果程序中有继承出现，建议在基类中给析构函数都加上 virtual 关键字，否则会有内存泄漏的可能。**</u>
- 在执行虚函数时，编译器会调用派生类中虚函数，以达到多态的效果。

- ## 虚函数表

虚函数表是实现动态多态关键技术，在对象内部有一个虚函数表地址指针，编译器将虚函数的地址存放于虚函数表中，在调用时通过查找虚函数表中相应函数。通过 visual studio C++ IDE 调试可以看到虚函数表的存在。

使用示例代码 1 中的代码在 visual studio C++ IDE 环境下调试。

环境说明：

- IDE 版本： visual studio 2017。
- 创建 Windows 控制台应该程序。
- 创建工程完毕后将示例代码 1 中文件添加至工程，并设置不使用预编译头：右击工程 --> 属性 --> C/C++ --> 预编译头 --> 预编译头（选择不使用预编译头）。

调试结果：

- 可以从图中看到分别在 per、stu、tea 对象中存在一个 `__vfptr` 指针，`__vfptr` 是虚函数表入口地址。
- `__vfptr[0]` 中保存了虚析构函数的地址。
- `__vfptr[1]` 中保存虚函数地址，如果还有其他虚函数也将保存在虚函数表中。
- 程序运行调用虚函数时，将根据查找虚函数表调用对应虚函数。

![5.3.2 virtual_table.png](README.assets/e16552853776caa07929fe41a7c6e2e0-0.png)

![5.3.3 virtual_table.png](README.assets/d8ad10457468b7ad31c25da39166e995-0.png)

- ## 实验操作

> 实验操作是工作中使用过的一个场景，多任务数据采集，实验操作将实现简单版本多任务数据采集。

场景描述：实现一个数据采集软件，在开始数据采集之前需要配置一个工程，在工程中配置多个数据采集任务，单个任务的数据源可能是不同的，可以是读取数据文件中数据，可以是读取数据库中数据等等。在开始数据采集之后，开启多个线程同时执行每个任务数据采集，每个任务采集的数据经过处理后保存到数据库中。

以上场景是工作中做过的一个软件的简单描述，正好适合使用多态的方式来实现。本次实验操作使用该软件的简化版本。

实验描述：本次实验实现一个简化版本数据采集软件，数据采集任务中只打印类名 + 函数名，main 函数中顺序执行任务。

#### 实验总结

通过实验操作也可体验到多态的可扩展行和易维护性的实用性，<u>**如果有新类型的任务时直接继承基类实现即可，并且和其他任务类型是相似的，实现起来非常方便。维护时也只需要检查相应任务类即可。**</u>提高了开发效率。

- 实现多态的关键在于虚函数表。
- 多态用在合适场景能提高开发效率。
- 使用多态也有一定的限制，必须在继承时并且有类似任务时，即合适场景时使用。

# 15——纯虚函数和抽象类

- ## 概念

#### 纯虚函数

- 只有函数声明没有函数定义的虚函数是纯虚函数。
- 纯虚函数只有声明，不需要实现函数体。

格式：

```c++
virtual 返回值 函数名(参数列表) = 0;
```

例子：

```c++
virtual void doWork() = 0;
```

#### 抽象类

- 含有纯虚函数的类叫做抽象类。
- 抽象类的派生类也可以是抽象类。
- 抽象类不能实例化对象。
- 不要出现私有成员，私有成员无法被访问。

#### 接口类

类中仅含有纯虚函数的类称为接口类。即在类中没有数据成员，只有成员函数并且成员函数都为纯虚函数。

接口类作用：

- 表达一种能力。
- 作为协议。

- ## 纯虚函数和抽象类

通过上一小节可以了解到含有纯虚函数的类称为抽象类。对于纯虚函数，只需要知道如何定义一个纯虚函数即可，重要的是需要了解抽象类以及抽象类的使用方法。

- Person 类存在纯虚函数，为抽象类。
- 纯虚函数只需要声明，不需要实现函数体，具体实现方法由派生类中使用时实现。
- 抽象类不能实例化，如果使用抽象类实例化对象，编译器会报错。
- 如果在派生类中不实现纯虚函数，那么派生类也将是抽象类，也不能实例化对象。
- 抽象类除了不能实例化，与普通基类使用方法一致。

- ## 接口类

- 接口类也是抽象类。
- 一个类可以继承一个接口类，也可以继承多个接口类。
- 一个类可以继承接口类的同时继承非接口类。

#### 定义接口类规则：

- **不要有数据成员，可以有静态常量（使用 static const 或者 enum 定义）。**
- **除了析构函数，其他成员函数都为纯虚函数。**
- **必要要有虚析构函数，并且提供默认实现。**
- **不要声明构造函数**。
- **可以有公有成员和保护成员，不要有私有成员，私有成员无法被访问。**

> 示例代码中 Person 类为接口类，示例代码中 <u>Student 类继承了 Person 类，但并未实现纯虚函数接口，所以 Student 类为抽象类</u>，HighStudent 类中实现了所有的纯虚函数接口。

- Person 类为接口类。
- 如果继承了 Person 类，并且要使用 Person 类的派生类时，派生类中必须要实现 Person 类中纯虚函数后才能实例化对象，否则编译报错。
- 接口类一般只需要有 `.h` 文件，没有 `.cpp` 文件，因为接口类中纯虚函数都不需要有函数实现体。
- 实例化时可以使用 HighStudent 类实例化 Person 类或者 Student 类，如果实例化 Person 类，只能使用 Person 类中已定义成员函数。

- ## 抽象类与接口类

#### 抽象类应用

抽象类的应用很广泛，如果你使用 C++ IDE 开发环境，如 Qt 或者 visual studio C++ 等等，开发环境中很多已经实现的类是通过继承一些抽象类实现的。

例如《3.1 虚函数以及实现原理》章节中的实验操作（数据采集任务）中 Task 类便可以使用抽象类实现。因为 Task 类本身不需要实例化。

#### 接口类应用

如下示例代码 4，假设有一场飞行比赛，只能有飞行能力的才能才参加，在程序中表现的形式为必须要继承 Flyable 类后才能将对象作为参数传递到给 flyMatch 函数。

同理，如果原有工程上已经有实现的函数功能，希望增加工程的可扩展行，可以编写一个函数，并使用接口类对象作为参数，如果之后再要增加某功能模块，那么只要继承接口类使用即可，而不必修改原来的程序。

工程中尽量增加程序的可扩展性，在之后的维护工作中会减少很大的工作量。避免了多继承的复杂性和低效性的同时又提供了多重继承的好处。

![image-20220429101947784](README.assets/image-20220429101947784-1198789.png)

运行结果：如示例代码中，Plan 和 Bird 是两个完全不同的种类，但是可以将它们具有的共同属性抽象出来。

- 定义一个接口类，在扩展时必须按照接口类的协议方式扩展。
- 接口类适合需要编写可扩展的程序中。
- 程序需要实现多项功能，这些功能之间除了接口类外可能完全没有联系。
- 在定义 Flyable 接口类时只有 `.h` 文件，这是因为接口类不需要实现函数体，只需要在 `.h` 文件定义即可。

- ## 实验总结

#### 学习感悟

在初学继承、多态、模板这些语法时，可能会使劲想，以后会在什么地方用到，可是不需要想太多，因为没有发生的事情你永远想不到。只要先将课程中的语法、示例学会，之后在实际开发中，突然就会有那么一下灵光闪现，这个地方用 “多态” 应该会比较好。甚至有时候回想起之前开发过的程序，某个地方使用 “多态” 来优化一下可就方便多了。

<u>***在学习这件事上，先去学就好了，你永远不知道以后的某一个地方就用上了。不要等到以后要用上的那一刻才感叹，以前要是这个好好学一下就好了。***</u>

作为 C++ 开发者，本课程只是一个起点，还有好多好多其它的知识需要去学习，希望都不要停下脚步，深入的去学习。

不管是在生活中，还是在编程世界里，都是努力将资源更加合理化使用。在编程世界里相对会更加的简单，因为程序大部分也是源自于生活。C++ 提供了丰富的知识来编写程序，而我们需要学习如何在合适的场景判断运用那些知识更加的合适。

#### 多态总结

- 接口类的析构函数必须定义为虚析构函数。
- 总的来说，C++ 的静态多态比动态多态更加常用，C++ 的重载和模板不仅执行速度高效，也提高了代码的可复用性和开发效率。
- 在特定的场合下，使用动态多态也大大提高了开发效率，所以在开发时需要首先衡量使用场景。

# 16——RTTI（运行时类型识别）

> RTTI 全称 Run Time Type Identification，中文称为 “运行时类型识别”，在程序中使用 typeid 和 dynamic_cast 实现。RTTI 技术允许程序在运行时识别对象的类型。

- ## typeid

> ##### typeid 是 C++ 关键字，用于必须知晓多态对象的动态类型的场合以及静态类型鉴别。

#### 头文件

```cpp
#include <typeinfo>
```

#### 语法

1. `typeid( 类型 )`
2. `typeid( 表达式 )`

运行结果：

- 在本次测试中输出了类型的简写，这是由于编译器的区别。
- typeid 返回 type_info 引用类型，里面包含了对象的基本类型信息。

![image-20220429114339281](README.assets/image-20220429114339281.png)

#### 注意事项

- typeid 返回一个 type_info 对象的引用。
- 如果想通过基类的指针获取派生类的数据类型，基类必须带有虚函数。
- 只能获取对象的实际类型。

- ## dynamic_cast

> 只能用于含有虚函数的类，必须用在多态体系中用于类层次间向上和向下转化。
>
> dynamic_cast 类型转换是 C++11 之后版本才有的。

#### 语法

```cpp
dynamic_cast < 新类型 > ( 表达式 )
```

- 新类型：指向完整类类型的指针、到完整类类型的引用，或指向（可选的 cv 限定）void 的指针。
- 表达式：若 “新类型” 为引用，则为完整类类型的左值 (C++11 前)泛左值 (C++11 起)表达式；若 “新类型” 为指针，则为指向完整类类型的指针纯右值。
- 返回值：若转型成功，则 dynamic_cast 返回 “新类型” 类型的值。若转型失败且 “新类型” 是指针类型，则它返回该类型的空指针（NULL）。

![image-20220430111420648](README.assets/image-20220430111420648-1288462.png)

#### 运行结果

- 一般来说，派生类向基类转换时是没有问题，但是基类向派生类转换时是有可能错误的，并且编译器会直接给出警告。
- 使用派生类实例化基类后，在使用基类对象转派生类对象是可以的。

#### 注意事项

- 只能应用于指针和引用的转换。

- 要转换的类型中必须包含虚函数。

- 转换成功返回子类的地址，失败返回 NULL。

- ## RTTI技术

> - RTTI 技术可以通过父类指针识别其所指向对象的真实数据类型。
> - 运行时类型必须建立在虚函数的基础上，否则无需 RTTI 技术。

#### 运行结果：

![image-20220430113926821](README.assets/image-20220430113926821-1289968.png)

在运行时使用 typeid 识别类型、使用 dynamic_cast 进行类型转换。

![image-20220430113905303](README.assets/image-20220430113905303-1289946.png)

- ## 实验总结

- RTTI 需要以继承为基础。
- RTTI 基类中需要有虚函数或者纯虚函数。
- RTTI 使用 typeid 和 dynamic_cast 来实现。
- 需要注意在基类向派生类转换时可能会失败。

# 17——异常处理

> 所谓的异常便是程序中数据出现不合理的特殊情况处理，在做项目时我们常常需要想到的是特殊的情况，只有将所有的特殊情况处理好之后程序才能很好的运行。
>
> 那么异常处理跟多态有什么关系呢？C++ 标准库中已经存在异常处理类，并且就是使用了多态的方式实现的。
>
> 由于程序中使用异常处理后显得比较臃肿，并且使用 C++ 的异常处理也会有相应的代价，所以有很多的程序中只是简单的处理了异常。

- ## 关键字

异常处理时一共需要用到 3 个关键字：throw、try、catch。

- `throw`：当问题出现时，程序会抛出一个异常。这是通过使用 throw 关键字来完成的。
- `try` 块中的代码标识将被激活的特定异常。它后面通常跟着一个或多个 catch 块。
- `catch`：在您想要处理问题的地方，通过异常处理程序捕获异常。catch 关键字用于捕获异常。

- ## 标准异常类

> C++ 标准库有 exception 异常库，里面包含了常见的异常错误信息，如果标准库中没有你需要的类型，也可以自定义异常类型。
>
> 自定义异常类可以通过继承 exception，可以自己定义类型，建议通过继承 exception。

#### 头文件

```cpp
#include <exception>
```

#### 标准库类继承层次结构

![3.4.1 exception.png](README.assets/c340a4aa914267ce994d281af391d103-0.png)

#### 标准异常说明

| 类型                  | 描述                                                         |
| --------------------- | ------------------------------------------------------------ |
| std::exception        | 是所有标准 C++ 异常的基类。                                  |
| std::bad_alloc        | new 失败时抛出该异常。                                       |
| std::bad_cast         | dynamic_cast 类型转换失败抛出。                              |
| std::bad_exception    | 处理 C++ 程序中无法预期的异常时非常有用。                    |
| std::bad_typeid       | typeid 失败时抛出。                                          |
| std::logic_error      | 通过读取代码来检测到异常。                                   |
| std::domain_error     | 当使用了一个无效的数学域时，会抛出该异常。                   |
| std::invalid_argument | 当使用了无效的参数时，会抛出该异常。                         |
| std::length_error     | 当创建了太长的 `std::string`时，会抛出该异常。               |
| std::out_of_range     | 该异常可以通过方法抛出，例如 `std::vector` 和 `std::bitset<>::operator[]()`。 |
| std::runtime_error    | 通过读取代码来检测到异常。                                   |
| std::overflow_error   | 当发生数学上溢时，会抛出该异常。                             |
| std::range_error      | 当尝试存储超出范围的值时，会抛出该异常。                     |
| std::underflow_error  | 当发生数学下溢时，会抛出该异常。                             |

- ## 常见异常以及处理办法

> 有时候开发时可能不会用到 C++ 的异常机制，因为异常机制的异常捕获使得代码比较臃肿，取而代之的是直接使用条件判断。但是还是推荐使用 C++ 的异常处理机制，特别是对于刚做开发没有多久的开发人员来说，使用好异常机制可以快速定位到错误程序，会减少很多的排错工作量。
- 数组下标越界：当数组作为参数传递时会退化为指针，所以一般会将数据的长度也作为参数传递。
- 除数为 0：在开发时除数为 0 的错误也是常见的，并且程序不会报错，而是算出来的值很明显是错误的。
- 内存不足：内存不足在现在的开发中可能不常见，因为现在计算机的内存一般都比较大，但是一定要注意内存泄漏的问题。

#### 如何正确捕获异常

在以上的示例代码中可以发现一个捕获异常的方式，当抛出的异常类型为 C++ 内置类型时，如 int、double 等，catch 的参数直接使用按值传递，但是<u>**当抛出异常为类或者自定义类时，使用了 const 引用的方式。**</u>

通常 catch 传递时有三种传递方式：按值传递、引用传递、指针传递。那么*<u>为什么推荐使用引用传递呢？</u>*

***答：按值传递时，需要三次调用构造析构函数，降低了程序的性能；指针传递只需要调用一次构造析构函数，但是如果是一个栈空间的变量，出了 try 语句块之后，catch 的变量成为了野指针，对程序是相当危险的，如果是堆空间的变量需要手动释放内存；***使用引用传递需要构造析构两次，总体来说还是不错的，故而综合推荐使用引用传递的方式。

- ## 实验总结

#### C++ 异常处理优点

- 增强程序的健壮性。
- 使代码变得更加简洁优美、更易维护。
- 错误信息更灵活、丰富。

#### C++ 异常处理缺点

- 给程序带来更多时间和空间上的开销。
- 会一定程度上降低程序的性能。
- 破坏了程序的结构性。

如果程序抛出异常后并没有使用 catch 捕捉异常，那么最终这个异常会直接抛给操作系统，操作系统处理异常很简单粗暴，程序直接崩溃。

如果在抛出异常时能够将抛出异常的文件名、函数名、行号等信息打印出来，那么便能快速定位错误，能够大大提升排错效率。

在使用 IDE 编码时，一般来说 IDE 会重新封装异常类，但使用方法都是大同小异的。

关于异常处理以上知识点在开发中基本够使用，当然也还有一些知识可以深究，如果以上内容不能满足的请另外需要查找相关资料，这里也推荐一本书：《编写高质量代码：改善 C++ 程序的 150 个建议》，里面关于异常处理的的建议比较全面。在开发中需要按照实际情况使用异常处理方式。

# 18——友元函数与友元类

> 私有成员只能在类的成员函数内部访问，如果想在别处访问对象的私有成员，只能通过类提供的接口（成员函数）间接地进行。声明为友元函数或友元类后就可以直接访问类中所有成员，但同时也破坏了类的封装性。

- ## 友元函数

#### 友元函数分类

- 友元全局函数

- 友元成员函数

#### 语法

```cpp
// 友元全局函数:
friend 返回值类型 函数名(参数表);

//友元成员函数:
friend 返回值类型 其他类的类名::成员函数名(参数表)
```

#### 使用方式

关键字: friend

在类中使用 friend 关键字声明全局函数或者成员函数成为友元函数

#### 注意事项

- 友元函数参数一般使用类的对象引用，这样就可以直接访问类中的所有成员。
- 为了数据的安全，可以使用 const 关键字限制为只读。
- <u>**使用友元成员函数时，需要注意想清楚包含关系，如示例代码 2，是 Circle 类中成员函数需要直接访问 Point 类成员，需要在 Point 类中声明 Circle 的成员函数，并且需要添加 Circle 的头文件。而 Circle 类的 `Circle.h` 文件中需要声明 Point 类，在 `Circle.cpp` 中包含 Point 类头文件。**</u>

- ## 友元类

#### 语法

```cpp
// 友元类
friend 类名;
```

#### 使用方式

关键字:	friend

在类中使用 friend 关键字声明类成为友元类

#### 注意事项

- 一旦声明为友元类，则可以访问类中所有成员，包括私有成员。
- 需要明确声明友元类的关系，例如示例代码中是将 Circle 类声明为 Point 的友元类，那么 Circle 可以访问 Point 类中所有成员，而 Point 类是不可以访问 Circle 类的成员。
- 注意声明方式，如示例代码 3 中 Circle 声明为 Point 类的友元类，需要在 Point 类中使用 `class Circle` 声明一下。而在 Circle 中需要包含 Point 类的头文件。

- ## 实验总结

- 友元函数或友元类不受权限关键字的约束，可以在类内任意位置。
- 可以直接访问类的所有成员，包括私有成员。
- 友元函数或者友元类破坏了类的封装性，建议少用或者不用。
- 友元关系不可传递，即友元类的派生类不再是友元类。
- 友元关系是单向性的，如示例代码 3 中 Circle 类可以访问 Point 类，但 Point 类不能访问 Circle 类。
- 友元声明的形式及数量不受限制。
- 由于友元需要互相包含头文件，需要注意头文件重复包含问题。

# 19——static

> 静态的成员在实例化对象之前已经产生，并将数据存放在全局（静态）存储区。

- ## C 语言中 static 作用

#### static 作用

- static 修饰局部变量。
- static 修饰全局变量。
- static 修饰函数。

#### 静态局部变量

- 静态局部变量在全局数据区分配内存。
- 静态局部变量只初始化一次。
- 静态局部变量一般在声明处初始化，如果没有显式初始化，会被程序自动初始化为 0。
- 静态局部变量比普通局部变量生命周期长，始终驻留在全局数据区，直到程序运行结束。但其作用域还是为局部作用域，当定义它的函数或语句块结束时，其作用域随之结束。

#### 静态全局变量

- 静态全局变量都在全局数据区分配内存。
- 未经初始化的静态全局变量会被程序自动初始化为 0。
- 静态全局变量在声明它的整个文件都是可见的，而在文件之外是不可见的，即其他文件不能访问。

#### 静态函数

- 静态函数在声明它的整个文件都是可见的，而在文件之外是不可见的，即其他文件不能访问。
- 普通函数中可以调用静态函数，静态函数不能调用普通函数。

- ## 静态数据成员

- 静态数据成员必须单独初始化，如果不初始化，编译出程序将报错。
- 静态数据成员只初始化一次，并且需要单独初始化，之后再实例化对象时将不再初始化静态数据成员。
- 静态数据成员只有一份，且不依赖对象而存在。
- 静态数据成员有两种方式访问，一种是使用 `类名::数据成员` 格式，另一种是使用 `对象.数据成员`的格式。访问的前提是公有成员。

- ## 静态成员函数

- 静态成员函数不能使用 const 修饰，否则编译器将报错。
- <u>*在一个类中，静态成员函数不能调用非静态成员函数和非静态数据成员。而非静态成员函数可以调用静态成员函数。*</u>
- 静态成员函数有两种方式访问，一种是使用 `类名::函数名< 参数 >` 格式，另一种是使用 `对象.函数名< 参数 >` 的格式。访问的前提是公有成员。请参考示例代码 。

- ## 实验总结

在 C++ 中主要新增有静态数据成员和静态成员函数两种使用方法。公有静态数据成员可以看做是作用于在类中的全局变量，而私有静态数据成员虽然其他的类无法访问，但是类的所有对象将共享该数据。而静态的成员函数可以看做全局函数来使用。

- 静态成员函数没有 this 指针。
- 类的静态成员可以有两种方式访问：第一种是使用对象访问成员的方式；第二种是使用类的作用域方式。
- 静态数据成员一定需要单独初始化。
- 类中静态成员函数不能访问非静态成员函数。

# 20——运算符重载

> 在实现类时经常使用运算符重载，通过运算符重载后，使用时将变得非常的方便。
>
> C++ 使用 operator 关键字来重载运算符，运算符重载一般有两种方式：成员函数重载、友元函数重载。然而也有比较特殊的运算符重载。

- ## 常用重载运算符

> 在 C++ 编程中的符号可以通过重载的方式让自定义类变得更加符合常规使用方式。重载运算符一般分为单目运算符、双目运算符。例如 C++ 中经常使用到的 string 类里面便做了大量的运算符重载，使得在编程时对字符串的操作更加自如。
>
> 单目运算符：只需要一个操作数运算的操作符称为单目运算符，例如负号（-）。
>
> 双目运算符：需要两个操作数运算的操作符称为双目运算符，例如减号（-）。
>
> 上面的两个例子比较特殊。“-” 既是负号，也是减号。但是在实现功能时是不一样的，负号操作符没有参数，减号操作符是有参数的。

- #### 常用运算符列表

| 运算符 | 分类       | 解释                             | 示例              |
| ------ | ---------- | -------------------------------- | ----------------- |
| `++`   | 单目运算符 | 自增运算，前置 ++ 或者后置 ++    | ++a、a++          |
| `--`   | 单目运算符 | 自减运算，前置 -- 或者后置 --    | --a、a--          |
| `-`    | 单目运算符 | 负号                             | -a                |
| `/`    | 双目运算符 | 除法运算符                       | a / b             |
| `/=`   | 双目运算符 | 除后赋值运算符                   | a /= b            |
| `*`    | 双目运算符 | 乘法运算符                       | a * b             |
| `*=`   | 双目运算符 | 乘后赋值运算符                   | a *= b            |
| `+`    | 双目运算符 | 加法运算符                       | a + b             |
| `+=`   | 双目运算符 | 加后赋值运算符                   | a += b            |
| `-`    | 双目运算符 | 减法运算符                       | a - b             |
| `-=`   | 双目运算符 | 减后赋值运算符                   | a -= b            |
| `<<`   | 双目运算符 | 按位左移运算符，常用做输出运算符 | a << b、cout << a |
| `>>`   | 双目运算符 | 按位右移运算符，常用作输入运算符 | a >> b、cin >> a  |
| `<`    | 双目运算符 | 大于运算符                       | a < b             |
| `>`    | 双目运算符 | 小于运算符                       | a > b             |
| `<=`   | 双目运算符 | 小于等于运算符                   | a <= b            |
| `>=`   | 双目运算符 | 大于等于运算符                   | a >= b            |
| `==`   | 双目运算符 | 等于运算符                       | a == b            |
| `!=`   | 双目运算符 | 不等运算符                       | a != b            |
| `=`    | 双目运算符 | 赋值运算符                       | a = b             |
| `[]`   | --         | 数组下标运算符                   | a[b]              |

#### 运算符重载思想基本原则

1. 不能臆造运算符。
2. 运算符原有操作数的个数、优先级和结合性不能改变。
3. 操作数中至少一个是自定义类型。
4. 保持重载运算符的自然含义。

#### 限制

- 不能重载运算符 `::`（作用域解析）、`.`（成员访问）、`.*`（通过成员指针的成员访问）及 `?:`（三元条件）。
- 不能创建新运算符，例如 `**`、`<>` 或 `&|`。
- 运算符 `&&` 与 `||` 的重载失去短路求值。
- 重载的运算符 `->` 必须要么返回裸指针，要么（按引用或值）返回同样重载了运算符 `->` 的对象。

- ## 特殊运算符重载

1. 输出运算符（<<）与输入运算符（>>）只能使用友元函数方式重载。
2. 赋值运算符（=）与数组下标运算符（[]）只能使用成员函数方式重载。

一般运算符可以使用友元函数和成员函数的方式进行重载，以上特殊运算符只能用其中一种方式。

#### 输出运算符重载

由于输出运算符的第一个参数是 `ostream&` 类型，而成员函数默认有 this 指针作为第一个参数，故输出运算符只能使用友元函数的方式重载。

在 C++ 中，“<<” 原是按位左移运算符，在类中赋予了向左输出的意义，用于输出类中信息到屏幕或者后台，所以在实验中又称作为输出运算符。一般类中重载输出运算符的比较多，而重载输入运算符的相对比较少。

实验中将使用 Point 类进行举例说明。

![image-20220503103829500](README.assets/image-20220503103829500-1545510.png)

运行结果：

- 示例中使用友元函数方式对输出运算符进行重载。
- 输出运算符输出信息尽量具有一定的意义，增强可读性和可理解性。

#### 赋值运算符与数组下标运算符

> 赋值运算符是 C++ 默认有的，也就说就算不重载，编译器也会默认重载赋值运算符。而编译器默认重载的赋值运算符就需要注意深拷贝、浅拷贝的问题，为了增强程序的健硕性，建议重载赋值运算符。赋值运算符是将传入的类赋值到 this 指针，所以只能使用成员函数的方式进行重载。
>
> 数组下标运算符返回 this 指针成员的数据，所以也只能使用成员函数的方式进行重载。在示例中重载数组下标运算符并不是很合适，但是同样能表达数组下标运算符重载的意思。

![image-20220503110108402](README.assets/image-20220503110108402.png)

运行结果：

- 示例代码中使用<u>*成员函数方式重载*</u>输出运算符和数组下标运算符。
- ***数组下标是一定需要判断是否越界，并抛出相应的异常。***

- ## 运算符重载示例

前置 ++ 与后置 ++ 在编程时经常使用，但其意义是不一样的。前置 ++ 是将当前值直接 ++ 后返回，而后置 ++ 是返回一个当前值的临时对象，再进行 ++ 运算。

#### 成员函数重载前置 ++/ 后置 ++ 、前置 --/ 后置--、负号

运行结果：

- 前置 ++ 与前置 -- 没有参数，直接使用 this 指针 ++ 后返回。
- 后置 ++ 与后置 -- 有一个 int 类型的参数，实质上参数只作为区分前置 ++ 或 --，实际中时没有使用该参数。
- 后置 ++ 与后置 -- 实质是返回一个临时对象，再对 this 指针 ++ 或 --。

#### 成员函数重载 +/+=、-/-=

运行结果：

- 如果重载了加号（+），那么最好也重载加等（+=），在 C++ 编程中 + 与 += 是习惯性操作。例如 - 与 -=、* 与 *=、/ 与 /=、< 与 >、<= 与 >= 等符号最好能够成对的重载。
- 在重载时需要考虑返回对象引用还是对象这个问题。
- 使用参数时需要考虑使用 const T& 还是使用 T& 问题，推荐尽量使用 const 关键字。
- 推荐尽量使用引用，会提高效率。

#### 友元函数重载

运行结果：

- 使用友元函数与成员函数的方式重载运算符能达到一样的效果。
- 对于双目运算符来说，成员函数重载方式只需要一个参数，还有一个隐式的 this 指针；而友元函数重载方式有两个参数。
- 对于双目运算符建议使用友元函数的方式重载。

- ## 运算符重载优化

重载运算符时也需要注意优化问题，在前面的示例代码中会故意按照没有优化的方法编写，在优化小节专门提出优化方式。在参考程序中会注明优化代码。

#### 判断地址是否相同

在使用类似赋值运算符重载时需要先判断传入参数是否与 this 指针地址相同，如果相同则直接返回。

在示例中可能看不出差别，但是如果有些类的赋值操作需要先释放空间，再重新分配空间，如果加上判断会减少程序的消耗。

```cpp
// 优化前
Point& Point::operator=(const Point& p)
{
    this->x = p.x;
    this->y = p.y;
    return *this;
}

// 优化后
Point& Point::operator=(const Point& p)
{
    // 判断地址相同表示同一个对象，不必赋值
    if(this != &p) {
        this->x = p.x;
        this->y = p.y;
    }
    return *this;
}
```

#### 临时对象优化

前面重载了部分常用的运算符，临时对象会造成程序额外的开销，如果能尽量减少构造临时对象那就避免。

```cpp
// 优化前
Point Point::operator+(const Point& p)
{
    // 在运算符重载函数中构造一个临时对象并返回一个对象。

    // 由于临时对象在函数内有效，出了该函数后将再次通过拷贝构造一个临时对象。
    Point temp;
    temp.x = this->x + p.x;
    temp.y = this->y + p.y;
    return temp;
}

// 优化后
Point Point::operator+(const Point& p)
{
    // 直接返回一个构造的临时对象，将少构造一次临时对象。

    // 由于编译器的原因，visual studio C++ 能够看出效果，MinGW 或者 linux 下看不出效果。
    return Point(this->x + p.x, this->y + p.y);
}
```

运行结果：

- 对比实验在 visual studio 2017 环境下编译运行。
- 可以看到经过优化后少构造了一个临时对象。

![4.3.6 temp_object.png](README.assets/79cb0e5e6dc3cca39de9684979fdd6c7-0.png)

#### 赋值方式优化

```cpp
// 优化前
Point p1(3, 4);
Point p2(4, 5);
Point p3;
p3 = p1 + p2;

// 优化后
Point p1(3, 4);
Point p2(4, 5);
Point p3 = p1 + p2;
```

运行结果：

- 在实例化对象时，使用另外的对象初始化会比赋值操作少构造一个临时对象。

![4.3.7 assign.png](README.assets/cfbe49e93e15900565735a84fc74e7dc-0.png)

#### 总结

重载使得类变得更加方便使用，在重载时也要注意一些细节。

在重载运算符时，要尽量去贴合类的常用使用习惯，而不是看有什么运算符全部重载。需要选择适合类的重载运算符。

- 有些运算符最好要成对实现。
- 对于单目运算符最好使用成员函数方式重载，对于双目运算符最好使用友元函数方式重载。
- 尽量减少构造临时对象。

# 21——模版函数与模版类

> 在泛型编程的思想里，大部分基本算法被抽象、泛化，独立于与之对应的数据结构，用相同或相近的方式处理各种不同的情形。而模板是 C++ 中泛型编程的基础，模板是 C++ 编程中的一大利器，用好模板这个大利器，能够帮助我们编写程序提高好几个档次。
>
> 关于模板，我们需要学习到何种程度呢？
>
> 答：对于大部分开发者而言，首先学会使用 STL，例如 vector、list、map 等都是在开发中经常会用到的；其次是要自己会编写函数模板和类模板。这也是本次实验的目的。
>
> C++ 中一般常用有函数模板和类模板，例如 STL 中 vector、list 等都是模板类。其实关于模板的内容还不止于此，此外还有别名模板、变量模板等，[查看模板更多内容](https://zh.cppreference.com/w/cpp/language/templates)。

- ## 模版相关概念

在前面多态篇中提到过，多态分为动态多态和静态多态，而模板是属于静态多态的一种。

#### 关键字

在 C++ 中跟模板相关的关键字有：template、typename、class。

- template 关键字是声明模板的关键字。
- typename 与 class 在使用模板时的功能是一样的，没有区别。

#### 函数模版格式

```cpp
template <typename type>
返回值类型 函数名(参数列表)
{
   // 函数的主体
}
```

示例:

```cpp
template <typename T>
T Max(const T& a, const T& b)
{
   return a > b ? a : b;
}
```

#### 类模版格式

```cpp
template <typename type>
class 类名
{
    // 类主体
}
```

示例:

```cpp
template <typename T>
class MyVector
{
public:
    MyVector(int len);
    ~MyVector();
    // ...
private:
    T *arr;
    // ...
}
```

#### 函数模板与模板函数、类模板与模板类

函数模板与模板函数、类模板与模板类在概念上看似很相似，但需要注意这是两个不同的概念。

- 函数模板是编写函数的模板代码。
- 模板函数是指函数模板具体使用时产生带有具体数据类型的函数。
- 类模板是编写的类模板代码。
- 模板类是指使用类模板实例化带有类型的对象。

- ## 标准模版库

> C++ 标准库中引用了著名的 STL 模板库，其中像容器 vector、list、map 等都是类模板，本小节介绍模板容器类的使用方法。这几个容器是开发中经常会使用到的、并且使用的频率很高。本次实验课程中只使用了其中几个，实际上还有其他的容器可以使用，可以自行在 [中文官网](https://zh.cppreference.com/w/cpp/container) 查看相关使用方法。
>
> 在 Qt 或者 visual studio C++ 等 IDE 环境中对这些容器重新进行封装，但是其用法都是类似的。

#### STL 在 C++ 中的位置

STL 是 C++ 标准中的一部分，在 C++ 中扮演了很重要的角色，尤其是容器库与算法库。

![4.4.1 STL_range.png](README.assets/e5e1bd6e96307349a43698fe91190a06-0.png)

#### vector

数组是程序开发时经常会使用的，而固定长度的数组往往又不能满足需求，这个时候 vector 动态数组就能满足开发时的需求。

- vector 是动态数组，使用时先会申请一段连续的内存。
- vector 的 capacity() 是数组容量，而 size() 是数组实际元素个数。

vector 插入数据：

- vector 插入数据时提供三种插入方式，其中在尾部插入数据效率最高。

![4.4.2 vector_insert.png](README.assets/4bb08e43c1ea8f73593c604d49e40272-0-20220504120106898.png)

vector 删除数据：

- vector 删除数据时提供两种删除方式，其中在尾部删除数据效率最高。

![4.4.3 vector_remove.png](README.assets/7fe02c13f81b85e205816a673a546837-0.png)

Windows 下 vector 遍历数据：

- 以下代码是在 windows 环境下编写的一段代码，运行后发现下标方式访问明显会快很多，而迭代器的方式耗时最长，这也是部分公司为了追求效率而抛弃 STL 的原因。

```cpp
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

int main()
{
    const int count = 100000000;
    vector<int> vec(count);

    auto start = clock();

    // 1. 下标方式访问
    for(int i = 0; i < count; i++) {
        // vec[i];
        // 如果只是遍历而不修改值时建议使用 at(i) 函数方式访问
        vec.at(i);
    }
    cout << endl;
    auto end = clock();
    auto duration = end - start;
    cout << "下标方式访问：" << duration << " ms" << endl;

    start = clock();
    // 2. 迭代器方式访问
    for(auto d = vec.begin(); d != vec.end(); d++) {
        *d;
    }
    cout << endl;
    cout << "迭代器访问方式：" << clock() - start << " ms" << endl;

    start = clock();
    // 3. 迭代器方式访问
    for(vector<int>::const_iterator d = vec.begin(); d != vec.end(); d++) {
        *d;
    }
    cout << endl;
    cout << "迭代器访问方式：" << clock() - start << " ms" << endl;

    start = clock();
    // 4. 迭代器方式访问
    for(auto const &d: vec) {	// ???
        d;
    }
    cout << endl;
    cout << "迭代器访问方式：" << clock() - start << " ms" << endl;

    return 0;
}
```

#### list

- list 是双向链表，插入数据操作会很快。
- 删除操作时也是与插入操作类似。

![4.4.4 list_insert.png](README.assets/845f4433e7c5492c8bf38f94a6ea343c-0.png)

#### vector 与 list 性能比较

Windows 下：

```cpp
#include <iostream>
#include <vector>
#include <list>
#include <ctime>
using namespace std;
const int count = 1000000;

void tail_insert()
{
    clock_t start = clock();
    vector<int> vec;
    for(int i = 0; i < count; i++) {
        vec.push_back(i);
    }
    cout << "vector 尾插方式：" << clock() - start << " ms" << endl;

    start = clock();
    list<int> l;
    for(int i = 0; i < count; i++) {
        l.push_back(i);
    }
    cout << "list 尾插方式：" << clock() - start << " ms" << endl;

    start = clock();
    for(int i = 0; i < count; i++) {
        int temp = vec.at(i);
    }
    cout << "vector 下标遍历：" << clock() - start << " ms" << endl;

    start = clock();
    for(auto d = vec.begin(); d != vec.end(); d++) {
        *d;
    }
    cout << "vector 迭代器遍历：" << clock() - start << " ms" << endl;

    start = clock();
    for(auto d = l.begin(); d != l.end(); d++) {
        *d;
    }
    cout << "list 迭代器遍历：" << clock() - start << " ms" << endl;
}

void head_insert()
{
    clock_t start = clock();
    vector<int> vec;
    for(int i = 0; i < count; i++) {
        vec.insert(vec.begin(), i);
    }
    cout << "vector 头插方式：" << clock() - start << " ms" << endl;

    start = clock();
    list<int> l;
    for(int i = 0; i < count; i++) {
        l.push_front(i);
    }
    cout << "list 头插方式：" << clock() - start << " ms" << endl;
}

int main()
{
    head_insert();

    tail_insert();

    return 0;
}
```

运行结果：

- 插入时使用 vector 尾插方式最快，头插方式最慢，效果明显；而 list 不管是尾插还是头插方式效率都比较快。如果程序中插入删除操作比较频繁时可以考虑使用 list。
- 程序开发时可以结合使用场景综合考虑使用哪种容器。

![4.4.5 list_insert_cmp.png](README.assets/ee1e8096a614a152166dae7ec04b8b6c-0.png)

#### map

- map 提供一对 hash，自动建立 key-value 的对应，而 key 与 value 可以是任意类型。
- map 是有序键值对容器，键值唯一。
- map 提供了常用的方法可以对 map 做增删改查等操作。
- map 对查找算法进行了优化，而不用遍历整个表进行查找。
- map 将根据算法进行存储，与 vector 或者 list 的存储方式存在区别。

- ## 自定义函数模块

>  在合适的场合使用函数模板能够大大的提升开发的效率，例如经常使用的一个例子，求两个数的最大值。就目前使用的方法中，最大值求法有很多种，如宏定义、重载、模板。

#### 宏定义求最大值

宏定义求最大值的做法也会经常见到，但是宏定义不会安全检查，如果稍微有点错误就难以发现了。可以考虑使用模板替代宏。

```cpp
#define    MAX(a, b)    ((a) > (b) ? (a) : (b))
```

#### 重载求最大值

重载同样能实现求最大值，只是代码会比较冗余。

```cpp
int Max(int a, int b)
{
    return a > b ? a : b;
}

float Max(float a, float b)
{
    return a > b ? a : b;
}
...
```

#### 模板求最大值

相对于宏定义和重载来说，模板既能对程序安全检查，代码也不那么冗余。

```cpp
template<typename T>
T Max(const T& a, const T& b)
{
    return a > b ? a : b;
}
```

