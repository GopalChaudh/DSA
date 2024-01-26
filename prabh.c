#include<stdio.h>

int main() {
    int totalProcess;
    int timeQuantum;
    int i, j;
    
    int temp_swap;
    int buffer_turnaroundTime = 0;
    int flag = 0;
    printf("\n\t\t\t\t\t Priority Based Round Robin Scheduling \n");
    printf("\t\t\t\t==================================================\n");
    printf("\t\t\t\t--------------------------------------------------\n");
    printf("\t\t\t\t||\t      Name - Aman Kumar    \t\t ||\n");
    printf("\t\t\t\t||\t      Reg_no - 11803761     \t\t ||\n");
    printf("\t\t\t\t||\t      Sec - K18SJ              \t\t ||\n");
    printf("\t\t\t\t||\t      Roll - 25               \t\t ||\n");
    printf("\t\t\t\t||\t      Course Code - CSE316     \t\t ||\n");
    printf("\t\t\t\t||\t      Course - Operating System        \t ||\n");
    printf("\t\t\t\t--------------------------------------------------\n");
    printf("\n -----------------------------------------------------------------------------------------------\n");
    printf("Enter no of processes: ");
    scanf("%d", &totalProcess);
    int rp = totalProcess;
    int waiting_time_counter[totalProcess];

    printf("Enter time quantum for processes: ");
    scanf("%d", &timeQuantum);
    int process_number[totalProcess];
    int arrival_time[totalProcess];
    int burst_time[totalProcess];
    int priority[totalProcess];
    int buffer_burst_time[totalProcess];
    int turnaround_time[totalProcess];
    int waiting_time[totalProcess];
    float average_wt = 0;
    float average_tat = 0;

    for (i = 0; i < totalProcess; i++) {
        process_number[i] = i + 1;
        printf("\n |---------------------------------------------------------------------------|\n");
        printf("\nEnter Details for process P%d (Assuming all process arrived at 0.)\n", process_number[i]);
        arrival_time[i] = 0;
        printf("Enter Burst time : ");
        scanf("%d", &burst_time[i]);
        buffer_burst_time[i] = burst_time[i];
        printf("Enter Priority : ");
        scanf("%d", &priority[i]);
        waiting_time[i] = 0;
        turnaround_time[i] = 0;
        waiting_time_counter[i] = 0;
        printf("\n |---------------------------------------------------------------------------|\n");


    }

    printf("\nProcess details before sorting of process a/c priority");
    printf("\n -----------------------------------------------------------------------------------------------\n");
    printf("|    Process\t|\tAT\t|\tBT\t|\tWT\t|\tTAT\t|  Priority     |\n");
    printf(" -----------------------------------------------------------------------------------------------\n");
    for (i = 0; i < totalProcess; i++) {
        printf("|\tP%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\n", process_number[i], arrival_time[i], burst_time[i],
               waiting_time[i], turnaround_time[i], priority[i]);
    }
    printf(" -----------------------------------------------------------------------------------------------\n");

    for (i = 0; i < totalProcess - 1; i++) {
        for (j = i + 1; j < totalProcess; j++) {
            if (priority[i] < priority[j]) {
                temp_swap = priority[i];
                priority[i] = priority[j];
                priority[j] = temp_swap;
                temp_swap = burst_time[i];
                burst_time[i] = burst_time[j];
                burst_time[j] = temp_swap;
                temp_swap = buffer_burst_time[i];
                buffer_burst_time[i] = buffer_burst_time[j];
                buffer_burst_time[j] = temp_swap;
                temp_swap = arrival_time[i];
                arrival_time[i] = arrival_time[j];
                arrival_time[j] = temp_swap;
                temp_swap = process_number[i];
                process_number[i] = process_number[j];
                process_number[j] = temp_swap;
            }
        }
    }

    printf("\nProcess details after sorting of process a/c priority");
    printf("\n -----------------------------------------------------------------------------------------------\n");
    printf("|    Process\t|\tAT\t|\tBT\t|\tWT\t|\tTAT\t|  Priority     |\n");
    printf(" -----------------------------------------------------------------------------------------------\n");
    for (i = 0; i < totalProcess; i++) {
        printf("|\tP%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\n", process_number[i], arrival_time[i], burst_time[i],
               waiting_time[i], turnaround_time[i], priority[i]);
    }
    printf(" -----------------------------------------------------------------------------------------------\n");

    for (i = 0; rp != 0;) {
        if (buffer_burst_time[i] <= timeQuantum && buffer_burst_time[i] > 0) {
            buffer_turnaroundTime += buffer_burst_time[i];
            buffer_burst_time[i] = 0;
            flag = 1;
        } else if (buffer_burst_time[i] > 0) {
            buffer_burst_time[i] -= timeQuantum;
            buffer_turnaroundTime += timeQuantum;
        }

        if (flag == 1 && buffer_burst_time[i] == 0) {
            turnaround_time[i] = buffer_turnaroundTime - arrival_time[i];
            waiting_time[i] = buffer_turnaroundTime - arrival_time[i] - burst_time[i];
            flag = 0;
            rp--;
        }else{
             // Increment waiting_time_counter for processes that are waiting
    for (j = 0; j < totalProcess; j++) {
        if (j != i && buffer_burst_time[j] > 0) {
            waiting_time_counter[j]++;
            if (waiting_time_counter[j] >= 5) {
                // Increase the priority of the process if it has been waiting for too long
                priority[j]++;
            }
        }
    }
        }

        if (i == totalProcess - 1)
            i = 0;
        else if (arrival_time[i + 1] <= buffer_turnaroundTime) {
            i++;
        } else
            i = 0;
    }

    for (i = 0; i < totalProcess; i++) {
        average_wt = (average_wt + waiting_time[i]);
        average_tat = (average_tat + turnaround_time[i]);
    }

    printf("\nProcess details after scheduling");
    printf("\n -----------------------------------------------------------------------------------------------\n");
    printf("|    Process\t|\tAT\t|\tBT\t|\tWT\t|\tTAT\t|  Priority     |\n");
    printf(" -----------------------------------------------------------------------------------------------\n");
    for (i = 0; i < totalProcess; i++) {
        printf("|\tP%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\n", process_number[i], arrival_time[i], burst_time[i],
               waiting_time[i], turnaround_time[i], priority[i]);
    }
    printf(" -----------------------------------------------------------------------------------------------\n");

    printf("Average Waiting Time --> %f\n", average_wt / totalProcess);
    printf("Average Turnaround Time --> %f", average_tat / totalProcess);

    return 0;
}