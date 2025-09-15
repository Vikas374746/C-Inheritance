# **Experiment 14: Inheritance in C++**

---

### **Title of the Experiment:**

To study and implement different types of **Inheritance** in C++.

---

### **Objective / Aim:**

* To understand the concept of inheritance in C++.
* To implement different types of inheritance:

  * Single Inheritance
  * Hierarchical Inheritance
  * Multilevel Inheritance
  * Multiple Inheritance
* To demonstrate how inheritance enhances **code reusability** and supports object-oriented programming principles.

---

### **Tools Used:**

* Code::Blocks IDE or Visual Studio Code
* GCC Compiler (MinGW or g++)
* Operating System: Windows / Linux

---

### **Theory:**

* **Inheritance** is a feature of Object-Oriented Programming (OOP) in which one class (**derived class**) acquires the properties and behaviors of another class (**base class**).
* It supports **code reusability** and helps to establish a relationship between classes.

**Types of Inheritance in C++:**

1. **Single Inheritance** – A single derived class inherits from one base class.
2. **Hierarchical Inheritance** – Multiple derived classes inherit from the same base class.
3. **Multilevel Inheritance** – A derived class acts as a base class for another derived class.
4. **Multiple Inheritance** – A single derived class inherits from more than one base class.

**Advantages of Inheritance:**

* Promotes code reusability.
* Reduces redundancy.
* Provides better organization and modularity.
* Enables polymorphism.

---

### **Algorithms of Programs:**

---

#### **1. Single Inheritance**

**Algorithm:**

1. Start.
2. Define a base class `Vehicle` with attributes and functions.
3. Define a derived class `Car` that inherits from `Vehicle`.
4. Create an object of the derived class.
5. Access base class and derived class members using the object.
6. Stop.

---

#### **2. Hierarchical Inheritance**

**Algorithm:**

1. Start.
2. Define a base class `Jeans` with attributes (types) and a function (brand).
3. Define multiple derived classes (`Bootcut`, `WL`, `Skinny`) inheriting from `Jeans`.
4. Create objects of each derived class.
5. Access base and derived class members through their objects.
6. Stop.

---

#### **3. Multilevel Inheritance**

**Algorithm:**

1. Start.
2. Define a base class `Food` with attributes and functions.
3. Define a class `Dish` derived from `Food`.
4. Define a class `Restaurant` derived from `Dish` (making it multilevel).
5. Create an object of the most derived class (`Restaurant`).
6. Access members of all classes through this object.
7. Stop.

---

#### **4. Multiple Inheritance**

**Algorithm:**

1. Start.
2. Define base class `Vehicle` with attributes and functions.
3. Define another base class `Engine` with attributes and functions.
4. Define a derived class `Car` that inherits from both `Vehicle` and `Engine`.
5. Create an object of the derived class.
6. Access members from both base classes using this object.
7. Stop.

---

### **Flowchart (Text Description):**

Start → Define Base Class(es) → Define Derived Class(es) → Create Object of Derived Class → Access Base + Derived Members → Display Result → End

---

### **Conclusion:**

In this experiment, we studied and implemented **inheritance in C++**.

* We learned how **single, hierarchical, multilevel, and multiple inheritance** are applied.
* Inheritance helps in **code reusability**, avoids duplication, and organizes code effectively.
* It also serves as a foundation for other OOP concepts like **polymorphism**.

---
