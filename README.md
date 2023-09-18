0x16. C - Simple Shell

By Boniface

This project is designed to be completed in teams of two.
Learning Objectives

Upon completion of this project, you should be able to explain the following without relying on Google:
General

    The original designer and implementer of the Unix operating system.
    The author of the initial version of the UNIX shell.
    The creator of the B programming language (the direct precursor to the C programming language).
    Who Ken Thompson is.
    The functioning of a shell.
    The meaning of pid and ppid.
    How to manipulate the environment of the current process.
    The distinction between a function and a system call.
    The process of creating new processes.
    The three prototypes of main.
    How the shell employs the PATH variable to locate programs.
    Executing another program using the execve system call.
    Suspending process execution until one of its children terminates.
    The definition of EOF ("end-of-file").

Requirements
General

    Allowed editors: vi, vim, emacs.
    All files will be compiled on Ubuntu 20.04 LTS using gcc, with the options -Wall -Werror -Wextra -pedantic -std=gnu89.
    Ensure all files end with a new line.
    A mandatory README.md file should be placed at the root of the project folder.
    Code should adhere to the Betty style, verified using betty-style.pl and betty-doc.pl.
    Your shell should not have any memory leaks.
    Each file should contain no more than five functions.
    All header files must be include guarded.
    Use system calls only when necessary (explain why).

GitHub

    Each group should maintain one project repository. If you and your partner have repositories with identical names, you risk receiving a 0% score. Add your partner as a collaborator.

Additional Information

    Unless otherwise specified, your program should produce the same results as sh (/bin/sh), as well as identical error messages.
    The only distinction is when printing an error, the program name should match your argument_value[0] (refer to example).

Example of error with sh:

bash

$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found

Same error with your program shell_hash:

bash

$ echo "qwerty" | ./shell_hash
./shell_hash: 1: qwerty: not found
$ echo "qwerty" | ./././shell_hash
./././shell_hash: 1: qwerty: not found

List of allowed functions and system calls

    access (man 2 access)
    chdir (man 2 chdir)
    close (man 2 close)
    closedir (man 3 closedir)
    execve (man 2 execve)
    exit (man 3 exit)
    _exit (man 2 _exit)
    fflush (man 3 fflush)
    fork (man 2 fork)
    free (man 3 free)
    getcwd (man 3 getcwd)
    getline (man 3 getline)
    getpid (man 2 getpid)
    isatty (man 3 isatty)
    kill (man 2 kill)
    malloc (man 3 malloc)
    open (man 2 open)
    opendir (man 3 opendir)
    perror (man 3 perror)
    read (man 2 read)
    readdir (man 3 readdir)
    signal (man 2 signal)
    stat (__xstat) (man 2 stat)
    lstat (__lxstat) (man 2 lstat)
    fstat (__fxstat) (man 2 fstat)
    strtok (man 3 strtok)
    wait (man 2 wait)
    waitpid (man 2 waitpid)
    wait3 (man 2 wait3)
    wait4 (man 2 wait4)
    write (man 2 write)

Compilation

Your shell will be compiled using the following command:

bash

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o shell_hash

Files

    README.md: Describes the project repository.
    man_1_simple_shell: The manual page for the shell.
    AUTHORS: A file at the root of the repository listing all contributors.
    main.h: The header file containing standard headers and function prototypes.
    main.c: Initializes the program with an infinite loop by calling the prompt function.
    prompt.c: Utilizes the getline system call to read user input and runs an infinite loop with fork to maintain the prompt.
    special_character: Identifies special inputs, such as when the first input is a slash or if the user typed exit or env.
    string.c: Handles string operations (e.g., string length, writing strings, finding strings in directories, concatenating strings).
    command.c: Locates the command entered by the user.
    execute.c: Executes the command.
