#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float project_scores[3];
};
int main() {
    struct Employee emp[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter ID and Name: ");
        scanf("%d %s", &emp[i].id, emp[i].name);
        printf("Enter 3 project scores: ");
        for(int j = 0; j < 3; j++) {
            scanf("%f", &emp[i].project_scores[j]);
        }
    }
    printf("Employee Records\n");
    for(int i = 0; i < 5; i++) {
        printf("ID: %d | Name: %s | Scores: %.1f, %.1f, %.1f\n", 
                emp[i].id, emp[i].name, emp[i].project_scores[0], 
                emp[i].project_scores[1], emp[i].project_scores[2]);
    }
    return 0;
}