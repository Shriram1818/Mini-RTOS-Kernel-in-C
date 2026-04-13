#include "kernel.h"
#include "scheduler.h"
#include "tasks.h"

int main()
{
    create_task(task1,1);
    create_task(task2,2);
    create_task(task3,3);

    start_scheduler();

    return 0;
}