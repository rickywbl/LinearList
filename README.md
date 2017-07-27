# LinearList
数据结构线性表学习  自定义数组

```
//创建线性表
LinearList * listCreate(int capacity);

//销毁线性表
void linearListRelease(LinearList * list);

//清空线性表
void clearLinearList(LinearList * list);

//返回线性表的长度
int linearListLength(LinearList * list);

//获取对象位置的值
LinearListNodeValue getLinearListValue(LinearList * list ,int index);

//插入数据
void listInster(LinearList * list,int index,LinearListNodeValue value);
//增加数据
void listAddObject(LinearList *list,LinearListNodeValue value);
//修改数据
void listSet(LinearList * list,int index,LinearListNodeValue value);

//删除某个位置的数据
void listRemoveObjectAtIndex(LinearList * list,int index);

//删除所有和Value相同的数据
void listRemoveObjectWithValue(LinearList * list,LinearListNodeValue value);

//打印输出
void listPrint(LinearList * list);

```
