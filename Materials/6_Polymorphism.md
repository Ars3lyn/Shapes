# 📘 Polymorphism in C++
<!--TOC-->
  - [Overview](#overview)
  - [1. Compile-Time Polymorphism](#1.-compile-time-polymorphism)
    - [Example: Function Overloading](#example-function-overloading)
  - [2. Run-Time Polymorphism](#2.-run-time-polymorphism)
    - [Key Concepts:](#key-concepts)
    - [`virtual`](#virtual)
    - [`override`](#override)
  - [🧱 Syntax and Structure](#-syntax-and-structure)
    - [Base Class](#base-class)
    - [Derived Class](#derived-class)
  - [🧪 Full Example](#-full-example)
  - [🧭 Virtual/Override Summary](#-virtualoverride-summary)
  - [Why Use Polymorphism?](#why-use-polymorphism)
  - [🧰 Best Practices](#-best-practices)
  - [Summary](#summary)
  - [🎯 Quiz!](#-quiz)
<!--/TOC-->

## Overview

**Polymorphism** is a core concept in object-oriented programming (OOP) that allows objects of different types to be treated as objects of a common base type. In C++, polymorphism enables flexibility and reusability in code by allowing the same interface to behave differently for different underlying data types.

There are two main types of polymorphism in C++:

1. **Compile-time polymorphism** (also known as static polymorphism)
2. **Run-time polymorphism** (also known as dynamic polymorphism)

---

## 1. Compile-Time Polymorphism

This is achieved through **function overloading** and **operator overloading**. The decision about which function to invoke is made at compile time.

### Example: Function Overloading

```cpp
#include <iostream>
using namespace std;

class Print {
public:
    void show(int i) {
        cout << "Integer: " << i << endl;
    }

    void show(double d) {
        cout << "Double: " << d << endl;
    }

    void show(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Print p;
    p.show(5);
    p.show(3.14);
    p.show("Hello");
    return 0;
}
```

---

## 2. Run-Time Polymorphism

This is achieved using **inheritance** and **virtual functions**. The function call is resolved at runtime using **dynamic dispatch**.

### Key Concepts:
- **Base class pointer/reference** can point to **derived class objects**.
- `virtual`
  - Declares a function in the **base class** that can be **overridden** in derived classes.
  - Enables **dynamic dispatch** via a **vtable** (virtual table).
  - Ensures that the correct function is called for an object, even when accessed through a base class pointer or reference.
- `override`
  - Used in the **derived class** to indicate that a function is **intended to override** a virtual function from the base class.
  - Helps catch errors at compile time (e.g., mismatched function signatures).

## 🧱 Syntax and Structure

### Step 1: mark the base method with the `virtual` keyword
```cpp
class Base {
public:
    virtual void display() const {
        std::cout << "Base display()" << std::endl;
    }
};
```

- `virtual` tells the compiler to support dynamic dispatch for `display()`.

### Step 2: override the method in the derived class
> NOTE: the method signature in the derived MUST match the signature in the base

```cpp
class Derived : public Base {
public:
    void display() const override; //optionally add 'override' 
};
void Derived::display() const {
    std::cout << "Derived display()" << std::endl;
}
```

- `override` ensures this method matches a virtual method in the base class.

---

## 🧪 Full Example

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat meows" << endl;
    }
};

void makeSound(Animal* a) {
    a->speak();  // Dynamic dispatch
}

int main() {
    Dog d;
    Cat c;

    makeSound(&d);  // Output: Dog barks
    makeSound(&c);  // Output: Cat meows

    return 0;
}
```
---

## 🧭 Virtual/Override Summary

| Keyword   | Used In     | Purpose                                      |
|-----------|-------------|----------------------------------------------|
| `virtual` | Base class  | Enables dynamic dispatch                     |
| `override`| Derived class | Ensures correct overriding of base method  |


---

## Why Use Polymorphism?

- **Extensibility**: Easily add new classes with minimal changes to existing code.
- **Maintainability**: Reduces code duplication and improves readability.
- **Flexibility**: Write more generic and reusable code.

---

## 🧰 Best Practices

- Always use `override` in derived classes to avoid subtle bugs.
- Use `const` correctness if the base method is `const`.
- Prefer using **references or pointers** to base class for polymorphism.

---

## Summary

| Type               | Mechanism              | Binding Time | Example                     |
|--------------------|------------------------|--------------|-----------------------------|
| Compile-time       | Function/Operator Overloading | Compile Time | `show(int)`, `show(double)` |
| Run-time           | Virtual Functions       | Run Time     | `speak()` in `Animal` class |

---

## 🎯 Quiz!

Here's a short quiz on the topic: [quiz](./6_Polymorphism_quiz.html)

![Footer Separator](../../Shared/Images/separator01.png)

## 🔭 Markdown Viewer

How to view the markdown files in a browser...
- [Markdown Viewer](../../Shared/0_Setup.md)

---

## 🧠 Lecture Practices

Here are the lecture Practices...
- [Day 7](./Day07.md)
- [Day 8](./Day08.md)
- [Day 9](./Day09.md)

---

## 🔍 Lecture Quizzes

Here are the lecture quizzes...
- [Day 7](https://forms.office.com/r/s02tg66qFm)
- [Day 8](https://forms.office.com/r/0bGwGBWENi)
- [Day 9](https://forms.office.com/r/BQFdNAsBB0)

---

## Weekly Topics
Here are the topics for the week...
- [Classes](./1_Classes.md)
- [Structs](./1_Structs.md)
- [Fields](./2_Fields.md)
- [Getters and Setters](./2_GettersSetters.md)
- [Constructors](./3_Constructors.md)
- [Instances](./4_Instances.md)
- [Inheritance](./5_Inheritance.md)
- [Polymorphism](./6_Polymorphism.md)
- [Pointers](./7_Pointers.md)
- [Upcasting](./7_Upcasting.md)
- [Misc. Concepts](./8_Misc.md)

