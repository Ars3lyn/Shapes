# 📘 Day 09 Lecture Practices

## 💻 Unique Pointers

### 🧩 Part C-1 Modify Deck
We need to modify the existing Deck class to store pointers to Card objects.
1. Open the Deck.h file.
   - `Change` the vector to hold unique_ptr of Card.
   - Add a declaration for a method called `DealCard` that returns a unique pointer to a Card.
2. Open the Deck.cpp file.
   - modify the definition of MakeCards to create Card unique pointers.   
   - Add a definition for a method called `DealCard`
     - it should check if the vector of cards is empty. If so, call the MakeCards method.
     - get a random card from the deck
     - remove the card from the deck
     - return the card
   
---

### 🧩 Part C-2 Modify BlackjackDeck
- Open the BlackjackDeck.cpp file
  - modify the definition of MakeCards to create BlackjackCard unique pointers.
  
---

### 🧩 Part C-3.1 Create a BlackjackHand class
1. Right-click the project in the solution explorer and select "Add/Class..."
2. Enter `BlackjackHand` as the name and press enter to create the class.
3. Add the following items to the BlackjackHand class
   - `Fields`: vector of unique pointers to Card objects, an int for the score
   - a `getter` for the score field
   - a `constructor` that initializes the score to 0
   - a `Clear` method. 
     - reset the score to 0
     - clear the vector
   - an `AddCard` method
     - it should 1 parameter: a unique pointer to a Card
     - add the card pointer to the vector.
     - update the score for the hand
   - a `ShowCards` method
     - it should loop over the vector of cards and call print on each card

### 🧩 Part C-3.2 Create BlackjackDeck and BlackjackHand objects
1. Open the Day09.cpp
2. Create an `instance` of your BlackjackDeck class.
3. Call the `Shuffle` method on your BlackjackDeck object
4. Create an `instance` of your BlackjackHand class
5. Call `DealCard` twice on the deck. add each card to the BlackjackHand object using the AddCard method.
6. Call `ShowCards` on the BlackjackHand object.
7. Print the `score` of the BlackjackHand object.
