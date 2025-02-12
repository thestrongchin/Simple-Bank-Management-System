# Simple-Bank-Management-System

# 1. Description
This is a simple banking system that runs on C coding language. It can perform simple tasks such as check balance, deposit money, withdraw money, and exit system. **The user's balance is automatically set to 1000 USD as a welcome bonus.**

## 1.1. What I Learned
From this project, I learned all the basics of coding in C programming language. The things I learned are:

- **Data types:** I learned the different data types such as int, float, and char and the different characters that they can hold.

- **Scanf():** I learned how to read user input and have the code do functions based on the user input.

- **While loop:** I learned how to loop the code each time after the user did a selection. This was done with the (while) function.

- **Design:** I learned how to make a user-friendly design in the terminal by using methods such as the new line function and === to make a welcome menu

- **If function (conditional statements):** I learned how to use the if function with scanf() by using it to determine what to do based on user input. 

- **Buffer Clean:** I learned how to clean the buffer after each scanf() input to avoid the code from printing garbage data stored in the buffer. 

- **Printf():** I learned how to use printf() to make print out different lines of text in the terminal to make the user experience more enjoyable.

- The user's balance is set to 1000 USD as a welcome bonus

- A user-friendly emnu with 4 different selections:
  - 1. Check current balance
  - 2. Deposit money
  - 3. Withdraw money
  - 4. Exit bank

- Detect user input errors such as:
  - Negative numbers for depositing and withdrawing money
  - User's current balance is not enough to withdraw requested amount

- Simple implementation
- Ensures that user will deposit and withdraw valid amounts of money

## 2. Features
- Users balance set to 1000 USD by default as a welcome balance
- There is a user friendly menu with 4 basic bank operations: 
  - Check balance
  - Deposit money
  - Withdraw money
  - Exit system
- Error detection for user input errors:
  - Detect if user input for deposit and withdraw money is negative or positive
  - Detection for checking is withdrawal input is less than current balance
  - Detection for invalid selections
- Efficient implementation in C language

## 3. Using the Banking System

When you first run the program, a welcome/main menu will show up, which will prompt the user to make a selection. This menu looks like this: 

![alt text](image.png)
The user can enter a number as their selection. The number will map to a function. 

### 3.1. Checking the balance
If the user wants to check their current balance, they can select 1, which will map to check their balance. This is what the menu for checking the balance looks like:

![alt text](image-1.png)
You can see that in the code, I selected 1. After selecting 1, the code will show that my current balance is 1000 dollars. After the code displays my current balance, it will loop back to show the main menu. 

### 3.2. Depositing Money
If the user wants to deposit some money into their account, the selection to do that is 2. This is what the deposit money menu looks like. 

![alt text](image-2.png)

In this screenshot, you can see that when I select 2, the code will ask me how much I want to deposit. I wanted to deposit 5 dollars. Then, the program will add 5 dollars to my account, and then update my current balance.

**If I want to check my balance to make sure that I got the extra 5 dollars, I can check by selecting 1 at the main menu again:**

![alt text](image-3.png)











  
