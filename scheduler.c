#include <stdio.h>
#include "kernel.h"
#include "scheduler.h"

void start_scheduler()
{
    printf("\nStarting Mini RTOS Scheduler\n");

    for(int i = 0; i < task_count; i++)
    {
        if(task_list[i].state == READY)
        {
            task_list[i].state = RUNNING;

            printf("\nContext Switch -> Task %d\n",
                   task_list[i].task_id);

            task_list[i].task_function();

            task_list[i].state = READY;
        }
    }
}