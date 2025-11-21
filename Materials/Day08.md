# 📘 Day 08 Lecture Practices

## 💻 Inheritance and Polymorphism

### 🧩 Part B-1.1 Create a Knife class (Inheritance)
1. Right-click the project in the solution explorer and select "Add/Class..."
2. Enter `Knife` as the name and press enter to create the class. Enter `Weapon` as the base class.
3. Add 2 fields: length and serrated
4. Add getters and setters for the fields.
5. Add a constructor
6. Create a Knife object in main

### 🧩 Part B-1.2 Override (polymorphism)
1. `override` the showMe method. 
     - Print the details of the knife in addition to the Weapon details


---
# 📘 Day 08 Lecture Practices

## 💻 Inheritance and Polymorphism

### 🧩 Part B-1.1 Create a BlackjackCard class (Inheritance)
1. Right-click the project in the solution explorer and select "Add/Class..."
2. Enter `BlackjackCard` as the name and press enter to create the class. Enter `Card` as the base class.
3. Add a `constructor` that takes 2 string parameters used to initialize the suit and face.
     - call the Card's constructor

### 🧩 Part B-1.2 Override (polymorphism)
1. `override` the Value method. 
     - It should return an int
     - use the face to calculate a card value. A = 1, 2 = 2 ... J = 10, Q = 10, K = 10

### 🧩 Part B-1.3 Create a BlackjackCard object
1. Open the Day08.cpp
2. Create an `instance` of your BlackjackCard class. You can use any face and suit.
3. Call Print on the card.
4. Call the Value method and print the value.


## 💻 Inheritance and Polymorphism 2

### 🧩 Part B-2.1 Create a BlackjackDeck class
1. Right-click the project in the solution explorer and select "Add/Class..."
2. Enter `BlackjackDeck` as the name and press enter to create the class. Enter `Deck` as the base class.
3. Add the following items to the Deck class
   - `override` the MakeCards method
     - it should create 52 cards.
     - internally, create 2 vectors of string. 
       - one should hold the faces ("A", "2", "3", etc).
       - one should hold the suits ("Hearts", "Clubs", "Diamonds", "Spades")
     - use nested loops to create 52 unique `BlackjackCards` and add them to the vector for the class.


### 🧩 Part B-2.2 Create a BlackjackDeck object
1. Open the Day08.cpp
2. Create an `instance` of your BlackjackDeck class.
3. Call Print on the BlackjackDeck object
4. Call the Shuffle method on your BlackjackDeck object
5. Call Print on the BlackjackDeck object

