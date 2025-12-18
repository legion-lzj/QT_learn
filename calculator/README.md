# easy_Calculator



1. 使用`QJSEngine`和`QJValue`处理计算，要在`CMakeList.txt`加入以下代码，**代码位置适当**

   ```cpp
   find_package(Qt6 REQUIRED COMPONENTS Qml)
   target_link_libraries(myProject PRIVATE Qt6::Qml)
   
   // myProject == your project's name
   ```

2. 利用`flag`做标记，防止出现`num ++`会把最后面的运算符更新



