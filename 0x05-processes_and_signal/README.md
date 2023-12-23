## Introduction

This directory delves into the realm of processes and signals, exploring how to manage and interact with them in code. Here, you'll uncover techniques to create, control, and terminate processes, as well as understand and utilize signals to coordinate their execution.

## Contents

Files:
README.md (this file)
0-fork.c: Explores process creation using the fork() system call.
1-wait.c: Demonstrates process synchronization with wait() and waitpid().
2-signals.c: Examines signal handling and customization using signal() and sigaction().
3-kill.c: Illustrates process termination using kill() and signals.
4-sigchld.c: Introduces precise child process termination tracking with SIGCHLD.
5-exec.c: Explores process image replacement using the exec() family of functions.
## Prerequisites

Basic understanding of C programming language concepts.
Familiarity with Unix-like operating systems and command-line tools.
## Compilation and Execution

To compile each C file, use the following command in your terminal:

Bash
gcc -o <executable_name> <source_file.c>
Use code with caution. Learn more
For example, to compile 0-fork.c, run:

Bash
gcc -o fork 0-fork.c
Use code with caution. Learn more
To execute the compiled program, simply run the executable file:

Bash
./<executable_name>
Use code with caution. Learn more
## Key Concepts

Processes: Independent units of execution that share resources with the parent process.
Forking: Creating a new child process using the fork() system call.
Waiting: Synchronizing parent and child processes using wait() and waitpid().
Signals: Messages sent to processes to interrupt their normal execution.
Signal Handling: Defining custom actions for handling signals with signal() and sigaction().
Signal Sending: Terminating processes with kill() or sending other signals.
SIGCHLD: A signal sent to the parent when a child process terminates.
Process Replacement: Executing a new program within the current process using the exec() family of functions.
## Learning Objectives

Understand process creation, management, and termination.
Implement process synchronization with wait() and waitpid().
Handle signals effectively using signal() and sigaction().
Send signals to processes using kill().
Track child process termination with SIGCHLD.
Replace a process image with exec().
## Additional Notes

Explore the man pages for fork(), wait(), waitpid(), signal(), sigaction(), kill(), and exec() for more detailed information.
Experiment with different signal handling scenarios and process interactions.
Consider potential race conditions and synchronization issues when working with multiple processes.
