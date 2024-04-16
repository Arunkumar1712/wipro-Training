#include <stdio.h>

int main() {
    int SI_No, Id;
    char name[20], gender, phoneNo[20], address[100];
    float salary;

    printf("Enter the Employee Detail\n");
    printf("Enter SI_No:\n");
    scanf("%d", &SI_No);

    printf("Enter Id:\n");
    scanf("%d", &Id);

    printf("Enter name:\n");
    scanf("%19s", name);

    printf("Enter gender:\n");
    scanf(" %c", &gender);

    printf("Enter phoneNo:\n");
    scanf("%19s", phoneNo);

    printf("Enter address:\n");
    scanf("%99s", address);

    printf("Enter salary:\n");
    scanf("%f", &salary);

    printf("\n========================================\n");
    printf("            Employee Details            \n");
    printf("========================================\n");
    printf("SLNo\tID\tName\tGender\tPhno\tAddress\tSalary\n");
    printf("----\t---\t----\t----\t-------\t------\t-------\n");
    printf("%d\t%d\t%s\t%c\t%s\t%s\t%.1f\n", SI_No, Id, name, gender, phoneNo, address, salary);

    return 0;
}
