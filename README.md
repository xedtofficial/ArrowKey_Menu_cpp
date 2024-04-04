# ArrowkeyMenu_C++
###### v.1
  
## Overview
A clean and easy to use header file for a selection menu with arrow keys and return values. <br>
The code is designed so that you can modify it yourself without much difficulty. <br>
However, everything works out of the box. <br>
## Features

- Toggle with ↑↓ and select with →
- Add up to any 6 selection options (increaseable)
- Get return values
- Customize color
- Customize head-text
- Easy to use
<br>

## Deployment
Simply download the file and then insert it into the desired directory. <br>
Next, add `#include "menuclass.h"` at the beginning of the instance you want to run. <br>
<br>
 
## How To Use
Use the `menu` keyword to create a menu first. <br>
Then place up to 6 selection options with `.setTitle()`. <br>
Next, use `.chooseTitle()` to let the user choose a option and to get the return value. <br>
You can use `.ModeToSet` to store the return value as integer. <br>
 <br>

    int main(){
      menu home; 
      home.setTitle("  Option 1  ","  Option 2  ","  Option 3  ", ...);
      home.ModeToSet = home.chooseTitle();
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
First option will have the return value 0. <br>


