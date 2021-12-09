
# Banking System
It's an application for banking providing minimal features fo banking system.

# About Project
Banking System is based on a concept of recording customer’s account details.Here the user can perform all the tasks like **creating an account, deposit amount, withdraw amount, check balance, view all account holders detail and close an account**.
There’s no login system for this project. All the main features for banking system are set in this project.

This project uses **classes and file handling** features of C++. 
In order to store all the user’s data, an external file (DAT file) is created by the system, so every time we get into the system we can operate with the existing accounts. 
Bank Management System is developed using C++ Programming Language and different variables, strings have been used for the development of it.This project provides the simplest system for managing banking system.

In order to run this project, you must have installed **VS Code** on your PC.(We recommend these IDE).
For the project demo, have a look at the image slider below.


## Features

- Open an Account
- Balance Enquiry
- Deposit Amount
- Withdraw Amount
- Close an Account
- Show All Accounts

# Output

 ![](https://github.com/pawankumar1310/Banking-System/blob/main/output/Banking%20System.PNG?raw=true)


## Prerequisites
 - C++ IDE
   - [VS Code (Visual Studio Code)](https://code.visualstudio.com/docs/?dv=win)
   - Install following extensions : -
      -  C/C++
      - Code runer
      - C/C++ Makefile Project 
    - Go to manage setting and open Command Palette -type create c++ project and select folder for creating project.
 - MinGW Compiler
   - [MinGW-w64](https://sourceforge.net/projects/mingw-w64/)
   - Now you need to set the environment variables, so for which you need to paste the bin path.In bin folder "make.exe" must be otherwise you will find the error such as "'make' is not recognized as an internal or external command".
   - To avoid above such error we simply do following : -
        -  Make another copy of C:\MinGW\bin\mingw32-make.exe file in the same folder.
        -  Rename the file name from mingw32-make.exe to make.exe.
        -  Run make command again.
        -  [For more details click here.](https://stackoverflow.com/questions/23723364/windows-7-make-is-not-recognized-as-an-internal-or-external-command-operabl)
    


## Compile and Run Program
**After generating project and implementing the code we simply do following two steps : -**
-  To Compile the Program, type

```bash
  make
```

-  To run the Program, first change the directory and go to ouput folder where your **'main.exe'** file exits.For changing the directory,type **cd output** and for running the Program,type

```bash
  ./main
```
 *where ./ represents present working directory and 'main' is the executable target file.*
 
 

