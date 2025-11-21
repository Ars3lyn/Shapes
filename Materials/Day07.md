# 📘 Day 07 Lecture Practices

## 💻 Create a Class

### 🧩 Part A-1.1 Create a Card class
1. Right-click the project in the solution explorer and select "Add/Class..."
2. Enter `Card` as the name and press enter to create the class.

### 🧩 Part A-1.2 Fields with Getters and Setters
1. Add the following Fields to the Card class
   - suit and face. both should be strings.
   - `getters` and `setters` for the fields

### 🧩 Part A-1.3 Constructors
1. Add a `constructor` that takes 2 string parameters used to initialize the suit and face
     
### 🧩 Part A-1.4 Methods
1. Add the following methods...
   - a `Value` method. 
     - It should return an int
     - use the face to calculate a card value. A = 1, 2 = 2 ... J = 11, Q = 12, K = 13
   - a `Print` method
     - it should print the face " " suit. EX: `A Hearts`

### 🧩 Part A-1.5 Create a Card object
1. Open the Day07.cpp
2. In main, create an `instance` of your Card class. You can use any face and suit.
3. Call `Print` on the card object.

---

## 💻 Create a Class 2

### 🧩 Part A-2.1 Create a Deck class
1. Right-click the project in the solution explorer and select "Add/Class..."
2. Enter `Deck` as the name and press enter to create the class.
3. Add the following items to the Deck class
   - `Fields`: vector of Card objects
   - `getters` and `setters` for the fields
   - a `MakeCards` method
     - it should create 52 cards.
     - internally, create 2 vectors of string. 
       - one should hold the faces ("A", "2", "3", etc).
       - one should hold the suits ("Hearts", "Clubs", "Diamonds", "Spades")
     - use nested loops to create 52 unique cards and add them to the vector for the class.
   - a `Shuffle` method
       - In the definition...
         - it should check if the vector of cards is empty. If so, call the MakeCards method.
         - it should then randomly re-order the cards in the vector.
   - a `Print` method
     - it should check if the vector of cards is empty. If so, call the MakeCards method.
     - it should loop over the vector of cards to call print on each card

### 🧩 Part A-2.2 Create a Deck object
1. Open the Day07.cpp
2. Create an instance of your Deck class.
3. Call Print on the Deck object
4. call the Shuffle method on your Deck object
5. Call Print on the Deck object