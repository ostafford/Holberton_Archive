# C - argc, argv

## 0. It ain't what they call you, it's what you answer to


```
#include <stdio.h> // Include the standard input/output library

int main(int argc, char *argv[]) // main function with arguments
{
    printf("%s\n", *argv); // Print the first argument, which is the program name
    (void)argc; // Explicitly mark argc as unused to avoid compiler warnings

    return (0); // Return 0 to indicate successful execution
}

```

`(void)argc;` // Explicitly mark argc as unused to avoid compiler warnings

```
+---------------------------+
| Command Line Execution    |
|---------------------------|
| ./program_name arg1 arg2  |
+---------------------------+
        |
        v
+---------------------------+
|  main(argc, argv)         |
|                           |
|  argc = 3                 |
|  argv[0] = "program_name" |
|  argv[1] = "arg1"         |
|  argv[2] = "arg2"         |
+---------------------------+
        |
        v
+---------------------------+
|  printf("%s\n", *argv);   |
|  Prints: "program_name"   |
+---------------------------+


```

## 1. Silence is argument carried out by other means

```
#include <stdio.h> // Include the standard I/O library for printf

int main(int argc, char *argv[]) // main function, with command-line arguments
{
    printf("%d\n", argc - 1); // Print the number of arguments minus 1

    (void)argv; // Explicitly indicate that argv is unused

    return (0); // End program, return 0 to indicate success
}

```

`printf("%d\n", argc - 1);` // Print the number of arguments minus 1

```
Command: ./example arg1 arg2 arg3

            ┌─────────────────────────────┐
   argc = 4 │ "./example" "arg1" "arg2" "arg3" │
            └─────────────────────────────┘
              ↑        ↑       ↑       ↑
            argv[0]  argv[1] argv[2] argv[3]

Code Execution:
1. Calculate argc - 1 -> 4 - 1 = 3
2. Print "3\n" to console
3. Return 0

```

## 2. 2. The best argument against democracy is a five-minute conversation with the average voter
```
#include <stdio.h>  // Include standard input/output library

int main(int argc, char *argv[]) {
    int i;  // Declare an integer variable for loop counter

    // Loop through each argument passed to the program
    for (i = 0; i < argc; i++) {
        // Print the current argument (argv[i]) followed by a newline
        printf("%s\n", argv[i]);
    }

    return (0);  // Return 0 to indicate successful execution
}

```
// Loop through each argument passed to the program\
`for (i = 0; i < argc; i++) {`\
// Print the current argument (argv[i]) followed by a newline\
`printf("%s\n", argv[i]);`
}
```
                 ┌───────────┐
                 │  Program  │
                 │ Execution │
                 └─────┬─────┘
                       │
                       ▼
             ┌────────────────────┐
             │ Command Line Input │
             │    `argc`, `argv`  │
             └────────┬───────────┘
                      │
                      ▼
         ┌────────────────────────────────┐
         │ Argument Parsing (Shell)       │
         │ - Splits input by spaces       │
         │ - Treats quoted strings as a   │
         │   single argument              │
         └───────────┬──-────────────────-┘
                     │
                     ▼
            ┌─────────────────────┐
            │ For Loop:           │
            │ i = 0; i < argc; i++│
            └────────┬────────────┘
                     │
      ┌──────────────▼--───────────────┐
      │  printf("%s\n", argv[i]);      │
      │   // Print each argument       │
      └────────────────────────────────┘

```


## 3. Neither irony nor sarcasm is argument




## 4. To infinity and beyond



