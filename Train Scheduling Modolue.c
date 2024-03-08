//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma warning(disable:4996)
//
//typedef struct {
//    char trainNum[10];
//    char departureStation[50];
//    char arrivalStation[50];
//    char departureTime[10];
//    char arrivalTime[10];
//    int availableSeat;
//}TrainSchedule;
//
//void schedule();
//void searching();
//
//int main() {
//    int c;
//
//    printf("Welcome to Train Ticketing System\n");
//    printf("Please Select The Mode You Want.\n");
//    printf("---------------------------------\n");
//    printf("1. Train Schedule Time\n");
//    printf("2. Ticket Booking\n");
//    printf("3. Exit\n");
//    scanf("%d", &c);
//
//    switch (c) {
//    case 1:
//        schedule();
//        break;
//    case 2:
//
//        break;
//    case 3:
//        printf("Exiting program.\n");
//        return 0;
//    default:
//        printf("Invalid choice. Please select 1, 2, or 3.\n");
//        main();
//    }
//
//    return 0;
//}
//
//void schedule() {
//    int searchArrivalStation;
//    int count = 0;
//
//    TrainSchedule scheduleList[6] = {
//        {"T1001", "Kuala Lumpur Sentral", "Negeri Sembilan (Seremban)", "12:19pm", "14:51pm", 231},
//        {"T1002", "Kuala Lumpur Sentral", "Penang (Butterworth)", "03:55pm", "19:55pm", 213},
//        {"T1003", "Kuala Lumpur Sentral", "Kedah (Alor Setar)", "05:05pm", "21:37pm", 176},
//        {"T1004", "Kuala Lumpur Sentral", "Perak (Taiping)", "01:37pm", "18:30pm", 101},
//        {"T1005", "Kuala Lumpur Sentral", "Johor (Segamat)", "02:35pm", "17:09pm", 209},
//        {"T1006", "Kuala Lumpur Sentral", "Perlis (Arau)", "05:05pm", "22:37pm", 150},
//    };
//
//    printf("\t\t\t\t\t\tTrain Schedule Time\n");
//    printf("\n");
//    printf("Train ID   Departure Station         Arrival Station          Departure Time           Arrival Time       Available Seats\n");
//    printf("-----------------------------------------------------------------------------------------------------------------------------\n");
//
//    for (int i = 0; i < 6; i++) {
//        printf(" %s\t  %s\t %-30s\t %s\t\t %s\t \t%d\t\n", scheduleList[i].trainNum, scheduleList[i].departureStation, scheduleList[i].arrivalStation, scheduleList[i].departureTime, scheduleList[i].arrivalTime, scheduleList[i].availableSeat);
//    }
//    printf("==============================================================================================================================\n");
//
//}