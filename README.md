# CSC 2844 Data Structures Tool Reference

## Makefile
1. Create a new file called **Makefile** in the same directory as your program.
2. Add any rules you would like to have in your **Makefile**.

### Example
```
hello:
    g++ hello.cpp -o hello.out

debug:
    g++ -g hello.cpp -o hello-debug.out

clean: 
    rm -rf *.out
```

## VS Code C++ Debugging Setup

### Prerequesities

#### Extensions
- [C/C++ Extension by Microsoft](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)

#### Files

- An executable file with the debug symbols. You can compile this executable using the **g++ -g** command or by using a Makefile if you have a rule to do this.

### Setup

1.	Open a **.cpp** file in the editor.
2.	Click on the **Main Menu** (three horizontal lines in the upper left corner). 
3.	Point to **Terminal** on the main menu.
4.	Click on **Configure Default Build Task** on the **Terminal** submenu.
5.	Click **C/C++: g++ build active file** on the menu that appears from the Search bar in the upper middle section on the windows. A **tasks.json** file will be generated and stored in a directory called **.vscode**.
6.	Click on the **Main Menu** again.
7.	Point to **Run** on the Main Menu.
8.	Click on **Add Configuration** on the **Run** submenu. A **launch.json** file will be generated.
9.	Repeat steps 10 – 12. A menu will appear inside the configurations key in your **launch.json** file.
10.	Choose **C/C++: (gdb) launch**.
11.	The only setting you should have to change is the value of the **program** key. The value must contain the path to the executable with debug symbols.

