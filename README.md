🚀 OOP Lab 4 – C++ | Menus, Arrays, Recursion, span, and Console UI

This repository contains the solution for Object-Oriented Programming – Lab 4
The lab focuses on applying advanced C++ concepts, including:

✔ Dynamic console menus
✔ Working with structs
✔ Recursion
✔ Passing by reference
✔ Binary conversion
✔ Fibonacci sequence
✔ Using std::span for safer array manipulation
✔ Splitting arrays using spans
✔ Console UI using ANSI escape codes and arrow-key navigation

📌 Contents
1️⃣ Employee Management System

A small console-based system that allows:

➕ Add new employee

🔍 Display a single employee by ID

📋 Display all employees

🎨 Menu navigation using arrow keys (↑ / ↓) and Enter

🎭 Console formatting using escape sequences

Features used:

struct Employee

Static counter (employeeCount)

Formatted screen positions with escape codes

getch() for arrow-key navigation

2️⃣ Recursion Tasks
🔢 Fibonacci Function

A recursive implementation that prints Fibonacci numbers using static variables.

fibonacci(10);

⚙️ Binary Conversion

A recursive function to print the binary representation of a number:

printBinary(13);   // Output: 1101

3️⃣ Swap by Reference

Demonstrates passing parameters by reference using C++ references:

swapByReference(x, y);

4️⃣ Using std::span (Modern C++ Feature)

A second part of the lab demonstrates the power of std::span:

Split an array into two spans (first half, second half)

Replace first half with 1s

Replace second half with 0s

Example:

array<int, 10> arr = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
replaceValues(arr);


Before:
5 6 7 8 9 10 11 12 13 14
After:
1 1 1 1 1 0 0 0 0 0

🛠 Topics Covered in This Lab

Structs & structured data

Console UI (escape sequences + cursor movement)

Menus and interaction

Recursion (Fibonacci, Binary conversion)

Passing by reference

Arrays & std::array

std::span (safe view over arrays)

Splitting arrays without copying

Cleaning console with system("cls")

Arrow-key input handling

📷 Output Examples

You can add screenshots here if you want for a better README look.

📚 How to Run

Compile with any C++ compiler that supports C++20 (for std::span):

g++ main.cpp -std=c++20 -o lab4
./lab4

🧑‍💻 Author

Created by Mohanad (Honda) during the OOP course at ITI – 9-Month Program.
