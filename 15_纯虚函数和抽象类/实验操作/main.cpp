#include "Rectangle.h"
#include "Circle.h"
#include <list>
#include <iostream>
using namespace std;

void calc(list<Shape *> s)
{
    // 遍历所有任务
    for (list<Shape *>::iterator it = s.begin(); it != s.end(); ++it)
    {
        cout << (*it)->calcArea() << endl;
        cout << (*it)->calcPerimeter() << endl;
        ;
    }
}

int main()
{
    list<Shape *> shapes;
    // 向链表中添加任务
    shapes.push_back(new Rectangle(3, 4));
    shapes.push_back(new Circle(5));

    calc(shapes);

/*  
    // 释放链表中所有任务:方法一
    // 如果 list 保存的是指针对象,使用 list 的 clear() 或者 erase() 方法不会释放内存
    // 需要在程序中遍历 list 释放内存
    for (list<Shape*>::iterator it = shapes.begin(); it != shapes.end(); ++it)
    {
        // 小心迭代器陷阱,直接删除当前指针后无法找到下一个指针
        // shapes.erase(it);

        // 第一种使用方法,delete 当前迭代器后需要进行 ++ 操作,让指针指向下一个对象
        delete ((*it)++); // (*it) 需要加括号,否则 ++it 会先运算
        (*it) = nullptr;
    }
    shapes.clear();
 */
    
    // 释放链表中所有任务:方法二
    // 第二种使用方法,erase() 返回下一个对象指针
    for (list<Shape*>::iterator it = shapes.begin(); it != shapes.end();)
    {
        // auto temp = (*it);
        Shape* temp = (*it);
        delete temp;
        temp = nullptr;
        it = shapes.erase(it);
    }

    return 0;
}