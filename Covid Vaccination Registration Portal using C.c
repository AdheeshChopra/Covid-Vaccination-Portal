#include <stdio.h>
struct Person {
  char name[100];
  char age[3];
  char gender[10];
  char vaccine[20];
};

struct Person registry[100];
int registrySize = 0;

void addPerson() {
  struct Person newPerson;

  printf("Enter name: ");
  scanf("%s", newPerson.name);

  printf("Enter age: ");
  scanf("%s", newPerson.age);

  printf("Enter gender (M/F): ");
  scanf("%s", newPerson.gender);

  printf("Enter vaccine received (COVACCINE, COVID SHIELD, etc.): ");
  scanf("%s", newPerson.vaccine);

  registry[registrySize++] = newPerson;
  printf("Person added to registry successfully!\n");
}

void viewRegistry()
{
  if (registrySize == 0)
    {
    printf("Registry is empty.\n");
    }
  else
    {
    printf("Name\t\tAge\t\tGender\t\tVaccine\n");
    for (int i = 0; i < registrySize; i++)
     {
      struct Person person = registry[i];
      printf("%s\t\t%s\t\t%s\t\t%s\n", person.name, person.age, person.gender, person.vaccine);
     }
    }
}

int main() {
  int choice;

  while (1) {
    printf("1. Add person to registry\n");
    printf("2. View registry\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        addPerson();
        break;
      case 2:
        viewRegistry();
        break;
      case 3:
        return 0;
      default:
        printf("Invalid choice.\n");
    }
  }
}
