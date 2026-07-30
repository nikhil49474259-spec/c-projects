/* Here we are gonna take the use input not our own data */

//if anything is left empty without a value atleast you need to add null//

int main() {

int age = 0
float gpa = 0.0
char grade = '\0'
char name [25] = ""

printf("Enter your age:" );
scanf("%d", &age);

printf("Enter your gpa:");
scanf("%f", &gpa);

printf("Enter your grade:");
scanf("%c", &grade);

printf("Enter your name:");
scanf("%s", &name);

return 0;
}


