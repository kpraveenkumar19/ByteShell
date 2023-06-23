# ByteShell
A simple shell used to execute built-in Linux commands.

## Project was completed using

- C language

## General Requirement for project

- All files will be compiled on Ubuntu using gcc


## Description ##

**Byteshell** is a simple UNIX command language interpreter that reads commands from either a file or standard input and executes them.

### How **Byteshell** works
* Prints a prompt and waits for a command from the user
* Creates a child process in which the command is checked
* Checks for built-insand local executable programs
* The child process is replaced by the command, which accepts arguments
* When the command is done, the program returns to the parent process and prints the prompt
* The program is ready to receive a new command
* To exit:  enter "exit"
* 
### Builtins implemented
* echo
* cd
* pwd
* exit
* builtin


### Compilation

`gcc *.c`

### Execution

`./a.out`

Example: echo
```
> echo  hello world
 hello world

```


Example: cd
```
> cd /

```

Example: pwd
```
>pwd
/mnt/c/Users/TARUN/Desktop/ACMproject

```
Example: builtin
```
>builtin pwd
/mnt/c/Users/TARUN/Desktop/ACMproject

```
Example: exit
```
>exit

```
