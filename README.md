# Mini-RTOS-Kernel-in-C
Implemented a simplified RTOS kernel in C including task creation, Task Control Block (TCB), scheduler design, and context switching simulation.
# Mini RTOS Kernel in C

## Overview

This project implements a **simplified Real-Time Operating System (RTOS) kernel** in C to demonstrate the core concepts of task management and scheduling used in embedded systems.

The project simulates how an RTOS manages multiple tasks using a **Task Control Block (TCB)** and a **basic scheduler** that performs context switching between tasks.

This project is designed for learning and demonstrating **RTOS fundamentals used in embedded systems development**.

---

## Features

* Task creation and management
* Task Control Block (TCB) implementation
* Priority-based task handling
* Context switching simulation
* Cooperative task scheduler
* Modular project structure similar to real embedded projects

---

## Project Structure

mini-rtos-kernel
│
├── include
│   ├── kernel.h
│   ├── scheduler.h
│   └── tasks.h
│
├── src
│   ├── kernel.c
│   ├── scheduler.c
│   └── tasks.c
│
├── main.c
└── README.md

---

## How It Works

### Task Creation

Each task is registered using the `create_task()` function which stores task details in a **Task Control Block (TCB)**.

The TCB contains:

* Task ID
* Task Priority
* Task State
* Task Function Pointer

### Scheduler

The scheduler is responsible for selecting and executing tasks.

Steps performed by the scheduler:

1. Check task state
2. Switch task state to RUNNING
3. Execute the task function
4. Return task to READY state

This simulates how a **basic RTOS scheduler switches between tasks**.

---

## Compilation

Compile the project using the **GCC compiler**.

```
gcc main.c src/*.c -Iinclude -o mini_rtos
```

---

## Running the Program

```
./mini_rtos
```

Example Output:

```
Starting Mini RTOS Scheduler

Context Switch -> Task 1
Task 1 executing

Context Switch -> Task 2
Task 2 executing

Context Switch -> Task 3
Task 3 executing
```

---

## Concepts Demonstrated

This project demonstrates several important **RTOS and embedded systems concepts**:

* Task Control Block (TCB)
* Task Scheduling
* Context Switching
* Cooperative Multitasking
* Modular Embedded Software Design

---

## Technologies Used

* C Programming
* GCC Compiler
* Git
* GitHub
* Visual Studio Code

---

## Future Improvements

Possible enhancements to make the RTOS simulation more advanced:

* Round Robin Scheduling
* Priority Preemptive Scheduling
* Timer Tick Simulation
* Semaphore Implementation
* Message Queue Support
* Task Delay Function

---

## Learning Outcome

This project helped in understanding:

* Basic RTOS architecture
* Task scheduling mechanisms
* Embedded software modular design
* Use of function pointers for task execution

---

## Author

Shriram Vishwanath Pai

---
