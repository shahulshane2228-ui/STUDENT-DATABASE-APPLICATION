#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FIELD_SIZE 50

struct Student
{
    int roll_number;
    char name[FIELD_SIZE];
    float cut_off;
    char city[FIELD_SIZE];
    char dream[FIELD_SIZE];
};

void Read_input(struct Student S[], int size);
void Display_output(const struct Student S[], int size);
void read_line(const char *prompt, char text[], size_t size);

int main(void)
{
    int count;
    struct Student *S;

    printf("Enter the Student Count: ");
    if (scanf("%d", &count) != 1 || count <= 0)
    {
        printf("Invalid student count. Please enter a positive integer.\n");
        return 1;
    }

    /* Clear the newline left behind by scanf. */
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
    }

    S = malloc((size_t)count * sizeof(*S));
    if (S == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    Read_input(S, count);
    Display_output(S, count);

    free(S);
    return 0;
}

void Read_input(struct Student S[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("\nEnter the Student %d details:\n", i + 1);

        printf("Enter the roll number: ");
        while (scanf("%d", &S[i].roll_number) != 1)
        {
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF)
            {
            }
            printf("Invalid roll number. Enter an integer: ");
        }
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF)
        {
        }

        read_line("Enter the name: ", S[i].name, sizeof(S[i].name));

        printf("Enter the cutoff: ");
        while (scanf("%f", &S[i].cut_off) != 1)
        {
            while ((ch = getchar()) != '\n' && ch != EOF)
            {
            }
            printf("Invalid cutoff. Enter a number: ");
        }
        while ((ch = getchar()) != '\n' && ch != EOF)
        {
        }

        read_line("Enter the city: ", S[i].city, sizeof(S[i].city));
        read_line("Enter the dream: ", S[i].dream, sizeof(S[i].dream));
    }
}

void Display_output(const struct Student S[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("\nStudent %d Details:\n", i + 1);
        printf("Student roll number: %d\n", S[i].roll_number);
        printf("Name of student: %s\n", S[i].name);
        printf("Cutoff of student: %.2f\n", S[i].cut_off);
        printf("City of student: %s\n", S[i].city);
        printf("Dream of student: %s\n", S[i].dream);
    }
}

void read_line(const char *prompt, char text[], size_t size)
{
    size_t length;

    printf("%s", prompt);
    if (fgets(text, (int)size, stdin) == NULL)
    {
        text[0] = '\0';
        return;
    }

    length = strlen(text);
    if (length > 0 && text[length - 1] == '\n')
    {
        text[length - 1] = '\0';
    }
    else
    {
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF)
        {
        }
    }
}
