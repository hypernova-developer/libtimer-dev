#include "include/timer.h"
#include <stdio.h>

int main()
{
    printf("--- libtime-dev System Check ---\n");
    printf("Developed by: hypernova-developer\n\n");

    printf("Starting secure boot process...\n");

    for (int i = 1; i <= 5; i++)
    {
        printf("Task %d: Loading modules... ", i);
        fflush(stdout);

        sys_sleep(800);

        printf("[DONE]\n");
    }

    printf("\nAll systems are green. Initiating Oxygen Runtime...\n");
    
    sys_sleep(2000);

    printf("Welcome to Hypernovae Ecosystem.\n");

    return 0;
}
