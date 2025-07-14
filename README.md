C assignments related to Unit - 2

Instructions:
1) Please note the word in italic is to be replaced by the actual value. Where ever
used file
indicates file name.
2) Please write the algorithm in a text file and submit it for review. This is so to see if
you have
correctly understood the problem statement and your logic is reviewed before you start
coding
3) The assignments to be:
a) coded using vi/vim/gvim editor.
b) placed in $HOME/c_unit2/ directory. Ensure the file has the .c extension and the
name of
the file has no spaces in them.
c) use the coding guidelines indicated in the document “Coding standards.pdf” while
writing
the programs. THIS IS VERY IMPORTANT.
d) write the problem statement as a comment at the top of the file.
4) Submitted programs should compile with no ERRORs or WARNINGS with gcc
compiler on
Linux Ubuntu 22.04.
5) Test your programs before submitting.
6) The last date for submission is T0 + 4.

LAB ASSIGNMENTS

Input and output redirection
When the scanf () function is used in a program, the program will wait for
whatever data is expected by scanf (). But the program can be made to read
that data from an input file by what is known as input redirection. To do this
we have to use the input redirection operator, <, on the command line when
executing the program as shown below:
./a.out < input.txt
where input.txt is the input file containing the data to be read by the scanf ()
function.
In a similar manner, the output of a program also can be redirected using the
output redirection operator, >. When the output is redirected using the >
operator, any output function (like printf ()) will print into the specified output
file. Eg:
./a.out > output.txt
where output.txt is the output file that will contain the output of the
program.

1. Write a program to print a number given by the user via a file. For example
the compiled C program a.out should run in the following manner:
./a.out < input.txt
This is called input redirection
The input.txt will contain the number to be printed. Example input in
input.txt.
4
2. Enhance the above program to print not just one number, but 10 numbers
given in the file input.txt. Example input in input.txt
4
5
7
10
8
2
1000
45
23
09
3. Write a program to read input character by character from stdin and print it
on the stdout.
In this program stdin and stdout should be made the files input.txt and
output.txt respectively by using input and output redirection. a.out
should run in the following manner:
./a.out < input.txt > output.txt
Example input.txt. Replace <name> with your name.
Hello World!!
This message is from KLS GIT 6th sem E&C student <name>
4. Modify the above program to count the number or characters read and print
the number on the screen, instead of printing the characters into output.txt.
How would you change the way you would execute the program in this case?
5. Write program to read input character by character from the file input.txt
and print each word on the screen on a separate line. Finally print the total
number of words.
6. Write program to read a character by character from the file input.txt and
print the number of 1, 2, 3, 4, etc.. lettered words as follows (assume that any

character other than blank space and tab form part of a word and that
between words there will be only one blank space or tab):
1 letter word =
2 letter word =
3 letter word =
...
7. Modify assignment 3 by reading one line at a time instead of character by
character. Compare the code with that in assignment 3. Which is a better
approach?
8. Write a program to read one line at a time from stdin and print it’s length on
the screen as follows:
Length of line 1:
Length of line 2:
9. Write a program that takes two strings from stdin. Implement the
function:
void my_strcat(char *s1, char *s2);
which appends s2 to the end of s1.(Note: You cannot use the standard
strcat()library function to implement my_strcat).
Print s1 on the screen.
