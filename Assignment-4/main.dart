abstract class Account {
 late int accountNumber;
  late double balance;

  void deposit(double amount) {
    balance += amount;
  }

  void withdraw(double amount);
}

class SavingsAccount extends Account {
 late  double interestRate;

  @override
  void withdraw(double amount) {
    balance -= amount;
    balance *= (1 + interestRate);
  }
}

class CurrentAccount extends Account {
  late double overdraftLimit;

  @override
  void withdraw(double amount) {
    if (amount <= balance + overdraftLimit) {
      balance -= amount;
    } else {
      print("Insufficient funds");
    }
  }
}

void main() {
 
  SavingsAccount mySavings = SavingsAccount();
  mySavings.accountNumber = 1234;
  mySavings.balance = 10000.0;
  mySavings.interestRate = 0.05;

  
  mySavings.deposit(1000.0);


  mySavings.withdraw(500.0);


  print("Savings Account Balance: ${mySavings.balance}");

 
  CurrentAccount myCurrent = CurrentAccount();
  myCurrent.accountNumber = 5678;
  myCurrent.balance = 2000.0;
  myCurrent.overdraftLimit = 1000.0;


  myCurrent.deposit(100.0);

  
  myCurrent.withdraw(200.0);


  print("Current Account Balance: ${myCurrent.balance}");
}
