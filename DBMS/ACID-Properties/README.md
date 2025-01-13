# ACID Properties in Databases

ACID properties ensure reliable database transactions by guaranteeing data integrity, consistency, and reliability. They stand for **Atomicity**, **Consistency**, **Isolation**, and **Durability**.

---

## 1. Atomicity
A transaction is treated as a single, indivisible unit. Either all the operations within the transaction are completed, or none are. If any part of the transaction fails, the entire transaction is rolled back.

### Example:
- **Scenario**: Transferring $100 from Account A to Account B.
  - Step 1: Debit $100 from Account A.
  - Step 2: Credit $100 to Account B.
- **What happens if a failure occurs?**  
  If the system crashes after Step 1 but before Step 2, the transaction will roll back, and Account A will retain its original $100.

---

## 2. Consistency
The database ensures that any transaction moves the database from one valid state to another, adhering to defined rules and constraints.

### Example:
- **Scenario**: A bank enforces a rule: The total balance of all accounts must always equal $1,000.
- **Before Transaction**:
  - Account A: $500
  - Account B: $500
- **After Transferring $100 from Account A to Account B**:
  - Account A: $400
  - Account B: $600
  - **Total Balance**: $1,000 (Consistent State).

If the transaction violates the rule, it will fail to ensure consistency.

---

## 3. Isolation
Each transaction is executed in isolation, meaning the intermediate state of a transaction is not visible to other transactions.

### Example:
- **Scenario**:  
  - Transaction 1: Transfers $100 from Account A to Account B.  
  - Transaction 2: Reads the balance of Account A.
- **What happens during isolation?**  
  Transaction 2 will not see the intermediate state of Transaction 1. It will either see the state before Transaction 1 starts or after it completes.

---

## 4. Durability
Once a transaction is committed, its changes are permanent, even in the event of a system crash.

### Example:
- **Scenario**: After transferring $100 from Account A to Account B, the changes are saved to persistent storage (e.g., disk).
- **What happens after a crash?**  
  The database will retain the updated balances (Account A: $400, Account B: $600) after recovery.

---

## Summary Table

| Property    | Description                                                  | Example                                                             |
|-------------|--------------------------------------------------------------|---------------------------------------------------------------------|
| **Atomicity** | All-or-nothing execution of a transaction.                  | Debit and credit operations occur together or not at all.           |
| **Consistency** | Database remains in a valid state after the transaction.  | Total account balances remain unchanged after a transfer.           |
| **Isolation**   | Transactions do not interfere with each other.            | Ongoing transactions are invisible to other transactions.           |
| **Durability**  | Committed changes are permanent.                          | Changes are saved to disk and persist after a system crash.         |

---

These ACID properties ensure that database systems are robust and reliable for handling transactions in various applications.
