#include "timer.h"
#include <stdio.h>

/**
 * @file samples.c
 * @brief Demonstration of the libtime-dev cross-platform sleep.
 * @author hypernova-developer
 */

int main()
{
    printf("--- libtime-dev System Check ---\n");
    printf("Developed by: hypernova-developer\n\n");

    printf("Starting secure boot process...\n");

    /* Simulating a loading sequence */
    for (int i = 1; i <= 5; i++)
    {
        printf("Task %d: Loading modules... ", i);
        fflush(stdout); // Ensure text is printed before sleep

        /* Wait 800ms between each task */
        sys_sleep(800);

        printf("[DONE]\n");
    }

    printf("\nAll systems are green. Initiating Oxygen Runtime...\n");
    
    /* A final longer pause for effect */
    sys_sleep(2000);

    printf("Welcome to SyntaX Ecosystem.\n");

    return 0;
}
