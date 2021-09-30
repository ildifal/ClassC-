Coding 03: File Reading
Description: Write a program that will accept one-and-only-one parameter from the command line, which
should be a file, read that file, and output the contents one line at a time, with line numbers, and a count of the
words and spaces in each line (see sample output below).
Background:
● This assignment relies heavily on the knowledge in chapters 4, 5, 6.
● You may want to study chapter 12 (strings).
● This repo has example code. Download it, run it, and study it carefully along with chapters 4,5,6 and 12.
● Study the Header files, Loose Coupling, APIs notes in your Notes folder on Blackboard.
Requirements/Specifications
● Follow the Assignment Specific Instructions using this GitHub assignment invite
https://classroom.github.com/a/COQIFhdK
● The invite will give you four files: main.cpp, main.h, file1, file2
● You will have to add a proper .gitignore, and a functions.h, and functions.cpp.
● Do not add any other files to your repo. Do not modify file1 or file2.
● You will read from the command line in this assignment. This program must be passed
one-and-only-one argument when it is run (which will be a file name).
● In main() you must test the number of parameters passed in, and make sure it’s exactly two (one for
the program name, and one for the argument to the program). If not show an error exactly as shown in
the examples.
● The first parameter (i.e. argv[1]) must be a valid file name. If it is not, show an error exactly as shown
in the examples.
● If you have a valid filename, open the file for reading (in main), pass the file handle to the display_file()
function, output the information exactly as shown in the examples (in display_file), close the file (in
main). This is demonstrated in the sample code provided for study.
● In your functions module you must have at least three functions that you will write and you will use them
to produce the required output. You may write more functions, but you have to have at least these:
○ void display_file(fstream&); This function will accept a valid file handle, display each line in
the file as shown in the examples with line numbers and statistics. It will call the functions
count_non_space() and int count_spaces() to get the statistics for display.You must use a
loop of some kind to do this.
○ int count_non_space(string); This function will count everything in a string except spaces and
return that count. Call this function from display_file() to produce the correct output. You must
use a loop of some kind to do this.
○ int count_spaces(string); This function will count spaces in a string and return that count.  Call
this function from display_file() to produce the correct output. You must use a loop of some
kind to do this.
● You must have a proper functions module with a functions.h and functions.cpp and correct prototypes
and includes for your functions. Study the Header files, Loose Coupling, APIs notes in your Notes
folder on Blackboard.
● You are given two test files, file1 and file 2. Use these to test your program and make sure your output
is exactly like the examples. There is also a file3 and file4 to which you do not have access, and your
program will be tested/graded against all four files. Your program must work for all test files. You can
assume and rely on the following about files...
○ All lines will begin in the first position of the line.
○ All words will be separated by one-and-only-one space.
○ Blank lines are allowed and can be more than one in a row.
○ There will not be trailing spaces on any line.
○ A file may or may not have a trailing crlf.
● You must follow all best practices for procedural programming and make proper separation of interface
and implementation (i.e. you have to use header files correctly).
● You may not use using standard namespace; but you may use (for example) using std::cout; in your
header file or you may use std:: before each instance where you need it in your cpp file.
Examples: print the line number, the line, and the statistics as shown
$ a.out file1
0: This is a file. [11 letters, 3 spaces, 4 words]
1: It has some words in it. [18 letters, 5 spaces, 6 words]
2: [ blank Line ]
3: It also has some blank-lines. [23 letters, 4 spaces, 5 words]
4: [ blank Line ]
5: [ blank Line ]
6: File processing is fun. [19 letters, 3 spaces, 4 words]
7: This file doesn't have a trailing crfl. [31 letters, 6 spaces, 7 words]
$ a.out file2
0: This is another file. [17 letters, 3 spaces, 4 words]
1: It has some words in it! However, they are different. [41 letters, 9 spaces, 10 words]
2: It also has a blank line. [19 letters, 5 spaces, 6 words]
3: [ blank Line ]
4: Programming is fun. [16 letters, 2 spaces, 3 words]
5: This file DOES have a trailing crfl. [29 letters, 6 spaces, 7 words]
6: [ blank Line ]


My Professor's note: 

Output for the command line error cases is not correct. It must match the examples exactly.

You cannot hardcode file names. 'badfile' is not the name of all bad files. you need to use the string the user provided.

Do not use for loops for indeterminate cases. You need to use while loops for these cases. See http://katrompas.accprofessors.com/best-practice-procedural-programming for more on this (go to the section on loops).

You should not be testing for blank line based on no spaces. You should detect it based on it's length being 0.

count_non_space() is not correct. you need to count all non spaces, not all characters.



