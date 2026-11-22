# STUDENT-DATABASE-APPLICATION

A menu-free, structure-based student record program written in C. It accepts details for multiple students and displays the records.

## Features

- Stores each student's roll number, name, cutoff, city, and dream
- Uses a `struct Student` to group student details
- Reads and displays multiple student records
- Accepts spaces in names, cities, and dreams
- Validates the student count and numeric inputs
- Allocates memory dynamically and releases it after use

## Requirements

- GCC or another C11-compatible compiler

## Compile

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic student_database.c -o student_database
```

## Run

On Linux or macOS:

```bash
./student_database
```

On Windows (with GCC):

```bash
student_database.exe
```

## Example

```text
Enter the Student Count: 2

Enter the Student 1 details:
Enter the roll number: 101
Enter the name: Arun Kumar
Enter the cutoff: 189.50
Enter the city: Coimbatore
Enter the dream: Software Engineer

Enter the Student 2 details:
Enter the roll number: 102
Enter the name: Meena Priya
Enter the cutoff: 195.75
Enter the city: Chennai
Enter the dream: Data Scientist

Student 1 Details:
Student roll number: 101
Name of student: Arun Kumar
Cutoff of student: 189.50
City of student: Coimbatore
Dream of student: Software Engineer

Student 2 Details:
Student roll number: 102
Name of student: Meena Priya
Cutoff of student: 195.75
City of student: Chennai
Dream of student: Data Scientist
```

## Current scope

This version stores records in memory for one program run. File saving, searching, updating, and deleting records can be added in future versions.
