#include <stdio.h>

void task_1();
void task_2();
void task_3();
void task_4();
void task_5();

int main() {
    

    task_4();
    
    return 0;
}

void task_1() {
    int n;
    puts("Input number");
    scanf("%d", &n);
    if(n < 20) {
        printf("nums < 20\n");
    } else {
        printf("nums => 20\n");
    }
}

void task_2() {
    int x, y;
    puts("Input number 1:");
    scanf("%d", &x);
    puts("Input number 2:");
    scanf("%d", &y);
    
    if(x > y) {
        if(x > 5 && x < 30) {
            printf("5 > nums > 30\n");
        }
    } else {
        if (y > 5 && y < 30) {
            printf("5 > nums > 30\n");
        }
    }
    
}

void task_3() {
    char a;
    puts("Enter a letter");
    scanf("%c", &a);
    switch (a) {
        case 'd':
            printf("Dnipro\n");
            break;
            
        case 'h':
            printf("Horyn\n");
            break;
            
        case 'p':
            printf("Ples\n");
            break;

        case 's':
            printf("Styr\n");
            break;

        case 't':
            printf("Teteriv\n");
            break;

        case 'u':
            printf("Uzh\n");
            break;
            
        default:
            break;
    }
}
void task_4() {
    int b;
    puts("Input nums: ");
    scanf("%d", &b);
    switch (b) {
        case 1:
            printf("Monday, 3 lesson\n");
            break;
            
        case 2:
            printf("Tuesday, 4 lesson\n");
            break;
            
        case 3:
            printf("Wednesday, 1 lesson\n");
            break;

        case 4:
            printf("Thursday, 2 lesson\n");
            break;

        case 5:
            printf("Friday, 2 lesson\n");
            break;

        case 6:
            printf("Saturday, 0 lesson\n");
            break;
        
        case 7:
            printf("Sunday, 0 lesson\n");
            break;
            
        default:
            break;
    }
}

void task_5() {
    int g, h;
    puts("Input number 1:");
    scanf("%d", &g);
    puts("Input number 2:");
    scanf("%d", &h);
    
    if(g > h) {
        if(g < 0) {
            printf("nums < 0\n");
        } else if(g > 0 &&  g <50) {
            printf("0 > nums > 50\n");
        } else if(g > 50 && g < 100) {
            printf("50 > nums > 100\n");
        } else if (g > 100) {
            printf("nums > 100\n");
        }
    } else {
        if (h < 0) {
            printf("nums < 0\n");
        } else if(h > 0 && h <50) {
            printf("0 > nums > 50\n");
        } else if(h > 50 && h < 100) {
            printf("50 > nums > 100\n");
        } else if (h > 100) {
            printf("nums > 100\n");
        }
    
    }
}

