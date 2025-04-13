# C - Recursion

## 0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget

```
void _puts_recursion(char *s)
{
    // Check if the current character is the null-terminator
    if (*s == '\0')  
    {
        _putchar('\n');  // Print newline after the string is finished
        return;          // End recursion when the string ends
    }

    _putchar(*s);        // Print the current character
    _puts_recursion(s + 1); // Recur with the next character (move pointer forward)
}

```

`if (*s == '\0') {}`\
// Check if the current character is the null-terminator\
Remeber that this is checking the pointer.

`_puts_recursion(s + 1);`\
// Recur with the next character (move pointer forward)

```
Call 1: _puts_recursion("Hello")
   |
   +-> Prints 'H'
   +-> Calls _puts_recursion("ello")

Call 2: _puts_recursion("ello")
   |
   +-> Prints 'e'
   +-> Calls _puts_recursion("llo")

Call 3: _puts_recursion("llo")
   |
   +-> Prints 'l'
   +-> Calls _puts_recursion("lo")

Call 4: _puts_recursion("lo")
   |
   +-> Prints 'l'
   +-> Calls _puts_recursion("o")

Call 5: _puts_recursion("o")
   |
   +-> Prints 'o'
   +-> Calls _puts_recursion("")

Call 6: _puts_recursion("")
   |
   +-> Reaches base case: Prints '\n'
   +-> Returns (no more recursion)


```

## 1. Why is it so important to dream? Because, in my dreams we are together

```
void _print_rev_recursion(char *s)
{
    // If the current character is not the null terminator (i.e., the string isn't done)
    if (*s)
    {
        // Recur for the next character in the string
        _print_rev_recursion(s + 1);

        // After returning from the recursive call, print the current character
        _putchar(*s);
    }
}


```



```
_initial call_
|--------------------------------|
| _print_rev_recursion("ABC")   |
|--------------------------------|
   |
   V
|--------------------------------|
| _print_rev_recursion("BC")    | --> Moving to next character 'B'
|--------------------------------|
   |
   V
|--------------------------------|
| _print_rev_recursion("C")     | --> Moving to next character 'C'
|--------------------------------|
   |
   V
|--------------------------------|
| _print_rev_recursion("")      | --> Base case reached (end of string)
|--------------------------------|
   |
   V
|---------------------------|
| Return from _print_rev_recursion("")  |
|---------------------------|
   |
   V
|--------------------------------|
| _putchar('C')  --> Prints 'C' |
|--------------------------------|
   |
   V
|--------------------------------|
| Return from _print_rev_recursion("C")  |
|--------------------------------|
   |
   V
|--------------------------------|
| _putchar('B')  --> Prints 'B' |
|--------------------------------|
   |
   V
|--------------------------------|
| Return from _print_rev_recursion("BC")  |
|--------------------------------|
   |
   V
|--------------------------------|
| _putchar('A')  --> Prints 'A' |
|--------------------------------|
   |
   V
|--------------------------------|
| End of recursion: All characters printed in reverse |
|--------------------------------|

```


## 2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange

```

int _strlen_recursion(char *s)
{
    // Base case: if the current character is the null terminator, return 0
    if (*s == '\0')
        return (0);

    // Recursive case: 1 for the current character, plus the result of the next recursive call
    return (1 + _strlen_recursion(s + 1));
}

```

`return (1 + _strlen_recursion(s + 1));`\
// Recursive case: 1 for the current character, plus the result of the next recursive call


```
Initial Call: _strlen_recursion("Hello")
    |
    v
1 + _strlen_recursion("ello")
    |
    v
1 + 1 + _strlen_recursion("llo")
    |
    v
1 + 1 + 1 + _strlen_recursion("lo")
    |
    v
1 + 1 + 1 + 1 + _strlen_recursion("o")
    |
    v
1 + 1 + 1 + 1 + 1 + _strlen_recursion("")
    |
    v
Base Case Reached: _strlen_recursion("") returns 0
    |
    v
Unwinding the recursion:
1 + 1 + 1 + 1 + 1 + 0 = 5
Final result: Length of "Hello" is 5

```


## 3. You mustn't be afraid to dream a little bigger, darling

```
int factorial(int n) {
    // Step 1: Check if the number is negative
    if (n < 0) 
        return (-1);  // If n is negative, return -1 to indicate an error.

    // Step 2: Check if n is 0
    if (n == 0) 
        return (1);  // If n is 0, return 1 (by definition of factorial).

    // Step 3: Recursive case
    return (n * factorial(n - 1));  // Multiply n by the factorial of (n-1) recursively.
}

```

#### Detailed Step-by-Step Explanation
1. First if condition (if (n < 0)):

- This checks if n is a negative number.
- Since factorials are only defined for non-negative integers, if n is negative, the function returns -1 as an error code. This is a safeguard to avoid incorrect input.
2. Second if condition (if (n == 0)):

- If n is 0, we know that the factorial of 0 is defined to be 1 (0! = 1), so the function returns 1.
3. Recursive Case (return (n * factorial(n - 1))):

- If neither of the above conditions are met (i.e., n is a positive integer), the function calculates the factorial recursively.
- It multiplies n by the result of factorial(n - 1), which is a call to the same function with the argument n - 1.
- This process repeats until n reaches 0, where the base case (n == 0) is hit and the recursion starts returning values.

```
factorial(4)                     // The initial call
  |
  v
4 * factorial(3)                 // This calls factorial(3)
                 |
                 v
           3 * factorial(2)     // This calls factorial(2)
                       |
                       v
                2 * factorial(1) // This calls factorial(1)
                           |
                           v
                    1 * factorial(0) // This calls factorial(0)
                                       |
                                       v
                                  1   // factorial(0) returns 1 (base case)

```

## 4. Once an idea has taken hold of the brain it's almost impossible to eradicate





## 5. Your subconscious is looking for the dreamer



```
int sqrt_recursion(int n) {
    // First check if the number is negative
    if (n < 0)
        return (-1);  // Cannot calculate square root of negative numbers
    
    // Start the recursive process with initial value i = 0
    return (inner_sqrt_recursion(n, i));
}

```
```
int inner_sqrt_recursion(int n, int i) {
    // Base case 1: if i*i exceeds n, no perfect square root exists
    if (i * i > n)
        return (-1);
    
    // Base case 2: if i*i equals n, we found the square root
    if (i * i == n)
        return (i);
    
    // Recursive case: increment i and keep checking
    return (inner_sqrt_recursion(n, i + 1));
}
```

```
_sqrt_recursion(n)
    |
    |----> if (n < 0) return -1  // If n is negative, return error code
    |
    |----> return inner_sqrt_recursion(n, 0)  // Start recursion with i = 0
              |
              |--> inner_sqrt_recursion(n, i)
                          |
                          |----> if (i * i > n) return -1    // Not a perfect square
                          |
                          |----> if (i * i == n) return i    // Found the square root
                          |
                          |----> return inner_sqrt_recursion(n, i + 1)  // Recurse with i+1


```


## 6. Inception. Is it possible?





