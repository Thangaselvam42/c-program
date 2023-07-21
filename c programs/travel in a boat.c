#include <stdio.h>

int main() {
    int i, num_people, age, eldest_age = 0, youngest_age = 999;
    
    
    scanf("%d", &num_people);

    for(i=0;i<num_people;i++) {
        
        scanf("%d", &age);

        if (age > eldest_age) {
            eldest_age = age;
        }
        if (age < youngest_age) {
            youngest_age = age;
        }
    }

    printf("%d\n", youngest_age);
    printf("%d\n", eldest_age);

    return 0;
}
