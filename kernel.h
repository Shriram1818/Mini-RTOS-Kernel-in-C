#ifndef KERNEL_H
#define KERNEL_H

#define MAX_TASKS 5

typedef enum
{
    READY,
    RUNNING,
    BLOCKED
} TaskState;

typedef struct
{
    int task_id;
    int priority;
    TaskState state;
    void (*task_function)(void);
} TCB;

extern TCB task_list[MAX_TASKS];
extern int task_count;

void create_task(void (*func)(), int priority);

#endif