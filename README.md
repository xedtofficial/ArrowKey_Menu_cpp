# ArrowkeyMenu_C++
###### v0.1.1
  
## Overview
A clean and easy to use header file for a selection menu with arrow keys and return values. <br>
The code is designed so that you can modify it yourself without much difficulty. <br>
However, everything works out of the box. <br>
## Features

- Toggle with ↑↓ and select with →
- Add up to any amount of selection options
- Get return values
- Customize color
- Customize header
- Easy to use
<br>

## Deployment
Simply download the file and then insert it into the desired directory. <br>
Next, add `#include "menuclass.h"` at the beginning of the instance you want to run. <br>
<br>
 
## How To Use
Use the `menu` keyword to create a menu first. <br>
Then use `.setTitle()` to add option titles. <br>
Next, use `.chooseTitle()` to let the user choose an option and to get the return value. <br>
You can use `.ModeToSet` to store the return value as integer. <br>
 <br>

    int main(){
    menu home;
      home.setTitle(" Option ~~~~~~~~~~ 1 ");
      home.setTitle(" Option ~~~~~~~~~~ 2 ");
      home.setTitle(" Option ~~~~~~~~~~ 3 ");
      home.setTitle(" Option ~~~~~~~~~~ 4 ");
      home.setTitle(" Option ~~~~~~~~~~ 5 ");
      home.setTitle(" Option ~~~~~~~~~~ 6 ");
      //...

      home.ModeToSet = home.chooseTitle() + 1;
      cout<<"Selected Option: "<<home.ModeToSet;
    }    
<br>
 
## Preview

### Screenshot
![image](https://github.com/xedtofficial/VerticalArrowKeySelectionMenu_c-cpp/assets/113713880/a790532b-1d1c-4174-8e5f-8b1f73a2678d)
### Video
https://github.com/xedtofficial/VerticalArrowKeySelectionMenu_c-cpp/assets/113713880/2658d565-7b8a-4b57-9741-b9e357aca737

<br>

## File Contains
- #include "iostream"
- #include "string"
- #include "windows.h"
- #include "cstdio"
- #include "vector"

## Note
MIT License <br>
This program can cause unexpected behavior. <br>
This program uses the WindowsAPI. <br>
First option will have the return value 0 by default. <br>


