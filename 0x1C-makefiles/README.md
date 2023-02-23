This project directory is based on the makefile concept in C programming language You need a file called a makefile to tell make what to do. Most often, the makefile tells make how to compile and link a program.
The target ‘clean’ is not a file, but merely the name of an action. Since you normally do not want to carry out the actions in this rule, ‘clean’ is not a prerequisite of any other rule.
A Makefile consists of a set of rules. A rule generally looks like this: targets: prerequisites command command command. The targets are file names, separated by spaces.The project is created on the following environment;
OS: Ubuntu 20.04 LTS
Version of gcc: 9.3.0
Version of make: GNU Make 4.2.1
