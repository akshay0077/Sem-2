class InsufficientFundsException extends Exception {
    public InsufficientFundsException(String message) {
        super(message);
    }
}

class CheckingAccount {
    private double balance;

    public CheckingAccount(double initialBalance) {
        balance = initialBalance;
    }

    public void deposit(double amount) {
        balance += amount;
    }

    public void withdraw(double amount) throws InsufficientFundsException {
        if (amount <= balance) {
            balance -= amount;
        } else {
            throw new InsufficientFundsException("Insufficient funds to withdraw $" + amount);
        }
    }

    public double getBalance() {
        return balance;
    }
}

public class Second {
    public static void main(String[] args) {
        CheckingAccount account = new CheckingAccount(1000.0);

        try {
            account.withdraw(1500.0); // This will throw an InsufficientFundsException
        } catch (InsufficientFundsException e) {
            System.out.println("Caught InsufficientFundsException: " + e.getMessage());
        }

        account.deposit(500.0);
        System.out.println("New balance: $" + account.getBalance()); // This should print "New balance: $1000.0"
    }
}
