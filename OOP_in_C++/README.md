# Object Oriented Programming
## Defination & Theory

# Core Concepts

A langugae which containes these four core segments is referrred as **_Object-Oriented-Programming_** language.

- ## Classes and object :
  Classes have no exixtence in the memeory, it's only a blueprint.When we make an object of that class, then it should having the same memeory.Class is a user defined-data-Type, called as **_ABSTRACT_DATA_TYPE_**.
- ## Data Hiding and Encapsulation:
  Data hided from every another object is called data hiding. All the members of a class including data members and member functions are closed in a class like a capsule is referred to as Encapsulation. This feature opens a new term named as `Abstraction` which means that all the inner details are completetly ignored and we focus only on the working of the software.
- ## Inheritance:
  **_Do not reinvent the wheel_**.In programming the term used as : **Do not repeat the code⛔**.Inheritance has the code reuse-ability.Some features are inherited from the base class and given to the derived class.If any language does not support the inheritance then its not calle the Object oriented programming language its called the **\*Object-Based-Language**.
- ## Polymorphism
  Define as : Single interface having multiple functionalities.(same name different behaviour).
  It has two types :
  - Static
    Function overloading is done in static polymorphism.It has be achieved on the compile time also called the **_compile_time_binding_**.
  - Dynamic
    Function overriding is done in the dynamic polymorphism.It has be achieved on the run time also called the **_Run_Time_binding_**.

Above info is taken from [this](https://github.com/muhib7353/Zero-to-Advance-OOP-Concepts-CPP/tree/main/01_Object%20Oriented%20Programming%20in%20C%2B%2B/00_Introduction%20to%20OOP) sources.


**Function Overloading:** It is the process of using the same name for two or more functions.
[Code for Constructor Overloading](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/02.01%20Function%20overloading%20Constructor.cpp)


**Inheritance:** Inheritance is the process by which one object can acquire the properties of anouther object.
```
class derived-class-name : access base-class-name{
    // body of the class
};
```
[Code for Inheritance](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/15.%20Inheritance.cpp)

When the base is inherited by using the **private** access specifier, all **public** and **protected** members of the base class become **private** members of the dirved class.

If we inherit a base class as **protected**. then all **public** and **protected** members of the base class become **protected** members if the dirved class. [Code](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/15.02%20Inheritance%20with%20Protected.cpp)

If we specify a base class as **public** in a class. then all **protected** members of the base class become **public** members if the dirved class.

[Inheritance code 1](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/15.01%20Inheritance%20with%20protected.cpp)
[Inheritance code 2](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/15.03%20protected%20base%20class%20inheritance.cpp)
[Inheritance code 3](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/15.04%20Inherit%20multiple%20base.cpp)
[Inheritance code 4](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/15.05%20cons%26distr%20inheritance.cpp)
[Inheritance code 5](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/15.05%20constructor%26distructor%20in%20Inheritance.cpp)

[passing parameters to base-class Constructors](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/15.06%20passPrmBaseConstrutors.cpp)
passing parameters to base-class Constructors.. just look at the code how cool this is. :D

**Virtual Base classes:** when multiple base classes are inherited. then ambiguity occure. To reduce it we can use virtual base class. [Code](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/15.08%20Virtual%20base%20class%20Inheritance.cpp)

**Virtual Function:** A virtual function is a member function that is decleared within a base class and redifined by a derived class. The virtual function within the base class defines the form of the interface to that function. Each redefination of the virtual function by a derived class implements its operation as it relates specifically to the derived class. The redefination creates a specific method. 
[Virtual Function](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/16.%20Virtual%20Function.cpp)

**NB:** constructor function cannot be virtual but destructor function can.

**A pure Virtual Function:** A pure virtual function is a virtual function that has no definition within the base class.
```
virtual type func-name(parameter-list) = 0;
```
[Pure virtual function](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/16.02%20Pure%20virtual%20Function.cpp)

**Abstract classes:** A class that contains at least one pure virtual function is said to be abstract. you cannot create objects of an abstract class, you can create pointers and references to an abstract class. This allows abstract classes to support **run-time polymorphism**. 
Just look at the 16.03 Virtual Function exercise code. how cool the concept is. I am really surprised.
[Code](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/16.03%20Virtual%20Function%20exercise.cpp)

**Constructor:** A constructor is a special funciton that is a **member of a class** and has the same name as that class.
- Constructors will not output or input anything.
- It is automatically called when the object is created.

**Friend Function:** A friend function has access to all private and protected members of the class for which it is a friend. To declear a friend function, include its prototype within the class, preceding it with the keyword friend.
[Friend Function Code 1](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/06.%20Friend%20function.cpp)
[Friend Function Code 2](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/06.01%20Friend%20function%20idol%20chekc.cpp)
[Friend Function Code 3](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/06.02%20Friend%20member%20function.cpp)

**Friend Classes:** It is possible for one class to be a friend of another class. When this is the case, the friend class and all of its member funcitons have access to the private members defined with in the other calss.
[Friend Class Code](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/07.%20Friend%20classes.cpp)

**Inline Function:** Inline can produce faster runtime. 
Each time a function is called, a significant amount of overhead is generated by the calling and return mechanism. Typically, arguments are pushed onto the stack and various registers are saved when a function is called. it take so much time. but by using inline none of those operations occur. 
inline is actually request to the compiler to specify the register for the function.
[Inline Function Code 1](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/08.%20Inline%20function.cpp)
[Inline Function Code 2](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/08.01%20Inline%20with%20class.cpp)

**Note:** It's best to use inline in very small functions.

**Parameterized Constructors:** It is possible to initialize the object when it is created by using parameterized constructors.
[Code](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/09.%20Parameterized%20Constructor.cpp)

**Operator Function:** 
```
    return-type class-name::operator# (argument list){
        // operations...
        return return-type
    }
```
[Code](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/14.%20Operator%20Function.cpp)

Here left side parameter is passed implicitly to the function through the this pointer.
and the right side operand is passed as parameter

**Operator Overloading code:**
[Operator Overloading code](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/14.01%20Operator%20Overloading.cpp)
[Operator Overloading with friend function](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/14.02%20Operator%20Ovldng%20with%20Friend%20funtion.cpp)
[Operator New and Delete function](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/14.03%20Operator%20new%26Delete.cpp)
[Operator Exercise](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/14.04%20Operator%20exercise.cpp)
[Operator Overloading Object and variable](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/14.05%20Operator%20Overloading%20object%2Bvariable.cpp)
[Operator Overloading Execrise](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/14.05%20Operator%20exercise.cpp)


**Static Data Members:** static means, when we declear a variable with **static** we are just telling the compiler that only one copy of that variable will exist and that all objects of the class will share that variable.
[Code 1](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/10.%20static%20data%20member.cpp)
[Code 2](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/10.01%20Static%20data%20member.cpp)

**Static Member Function:** A static member function is independent of any object of the class. A static member function can be called even if no objects of the class exist. A static member function can also be accessed using the class name through the scope resolution operator.

[Code 1](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/10.02%20Static%20data%20member.cpp)
[Code 2](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/11%20Static%20member%20function.cpp)
[Code 3](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/11.01%20Static%20member%20function.cpp)

**Nested Classes:**  A nested class is a member of its enclosing class. Non-static nested classes (inner classes) have access to other members of the enclosing class, even if they are declared private. *Static nested classes do not have access to other members of the enclosing class.*
[Code 1](https://github.com/anishsingh20/Programming-in-Cpp/blob/master/NestedClasses.cpp)

**Passing Object to Functions:** when an objcet is passing to a function, a copy of that object is made. This means that a new object comes into existence. When the function is terminates, the copy of the argument is destroyed. As its passing the copy object thats why its not creating the constructor again when we pass object in a function.
[Code 1](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/12%20Passing%20Object%20to%20funtion.cpp)

**Benefits of OOP**
* Better code reusability using objects and inheritance.
* Principle of data hiding helps build secure systems.
* Multiple objects can co-exist without any interference.
* software complexity can be easily managed.

**Why class is better then structure.**
every thing is same. But the only diffrence is that by default all members are **public in struc** and **privete in class**.

**Unions:** A union is an object similar to a structure except that all of its members start at the same location in memory. A union variable can represent the value of only one of its members at a time.
[Code](https://github.com/fuad7161/Interview-Preparation/blob/main/OOP_in_C%2B%2B/05.%20Union.cpp)


## Basic Knowledge
A class contain private and public parts. By default, all items defined in a class are **private**.
In scope resolution operator **::** links a class name with a member name in order to tell the compler what class the member belongs to.
        ```
        int i;
        main(){
            int i;
            ::i = 10 // refers to global i
        }
        ```
**Run Time Polimorphism:** In runtime polymorphism, the compiler resolves the object at run time and then it decides which function call should be associated with that object

## Interview Question about OOP
[Practice Problems 1](https://www.w3resource.com/cpp-exercises/oop/index.php)
[Practice Problems 2](https://www.codesdope.com/practice/cpp-classes-and-objects/)
[Hackerrank OOP](https://www.hackerrank.com/domains/cpp/classes/difficulty/all/page/2)
[InterviewBit OOP](https://www.interviewbit.com/cpp-interview-questions/#c++-coding-questions)
[Github OOP](https://github.com/Devinterview-io/oop-interview-questions)

