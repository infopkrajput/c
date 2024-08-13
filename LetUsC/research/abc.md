Let's analyze the code step-by-step to understand what the output will be:

1. **Variable Initialization:**
   ```c
   int num1 = 5, num2 = 4, tmp;
   ```
   - `num1` is initialized to 5.
   - `num2` is initialized to 4.
   - `tmp` is declared but not initialized.

2. **First `if` Statement:**
   ```c
   if (num1 > num2)
       swap1(num1, num2);
   ```
   - Since `num1` (5) is greater than `num2` (4), the `swap1` macro is executed.
   - The macro `swap1` expands to:
     ```c
     tmp = num1; num1 = num2; num2 = tmp;
     ```
   - After this operation:
     - `tmp` holds the value 5 (original value of `num1`).
     - `num1` is assigned the value of `num2`, which is 4.
     - `num2` is assigned the value of `tmp`, which is 5.
   - So, `num1` becomes 4 and `num2` becomes 5.

3. **Second `if` Statement:**
   ```c
   if (num1 < num2) {
       int temp = num1;
       num1 = num2;
       num2 = temp;
   }
   ```
   - Now `num1` (4) is less than `num2` (5), so the block inside the `if` statement executes.
   - A new variable `temp` is declared and initialized to the value of `num1`, which is 4.
   - `num1` is then assigned the value of `num2`, which is 5.
   - `num2` is assigned the value of `temp`, which is 4.
   - So, `num1` becomes 5 and `num2` becomes 4.

4. **Third `if` Statement:**
   ```c
   if (num1 == num2) {
       swap3(&num1, &num2);
   }
   ```
   - Since `num1` (5) is not equal to `num2` (4), this block does not execute.

5. **Output:**
   ```c
   printf("%d, %d", num1, num2);
   ```
   - Finally, the values of `num1` and `num2` are printed.
   - `num1` is 5 and `num2` is 4.

Therefore, the output of the code is:
```plaintext
5, 4
```

The explanation above covers the macro expansion, conditional checks, and the values of variables at each stage to arrive at the final output.