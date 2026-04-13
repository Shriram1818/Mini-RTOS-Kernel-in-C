#include <stdio.h>
#include "kernel.h"

TCB task_list[MAX_TASKS];
int task_count = 0;

void create_task(void (*func)(), int priority)
{
    if(task_count >= MAX_TASKS)
    {
        printf("Maximum tasks reached\n");
        return;
    }

    task_list[task_count].task_id = task_count + 1;
    task_list[task_count].priority = priority;
    task_list[task_count].state = READY;
    task_list[task_count].task_function = func;

    task_count++;
}