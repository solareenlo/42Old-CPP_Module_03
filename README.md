# 42Old-CPP_Module_03
- Inheritance

## ex03

### -Wshadow
> Warn whenever a local variable or type declaration shadows another variable, parameter, type, class member (in C++), or instance variable (in Objective-C) or whenever a built-in function is shadowed. Note that in C++, the compiler warns if a local variable shadows an explicit typedef, but not if it shadows a struct/class/enum. If this warning is enabled, it includes also all instances of local shadowing. This means that -Wno-shadow=local and -Wno-shadow=compatible-local are ignored when -Wshadow is used. Same as -Wshadow=global.
- Ref: [3.8 Options to Request or Suppress Warnings](https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html)

### Virtual function
> Virtual functions are member functions whose behavior can be overridden in derived classes. As opposed to non-virtual functions, the overriding behavior is preserved even if there is no compile-time information about the actual type of the class. That is to say, if a derived class is handled using pointer or reference to the base class, a call to an overridden virtual function would invoke the behavior defined in the derived class. Such a function call is known as virtual function call or virtual call. Virtual function call is suppressed if the function is selected using qualified name lookup (that is, if the function's name appears to the right of the scope resolution operator ::).
- Ref: [virtual function specifier](https://en.cppreference.com/w/cpp/language/virtual)


### Overriding & Overloading
- Overriding means giving a different definition of an existing function with same parameters. Overriding of functions occurs when one class is inherited from another class.
- Overloading means adding a different definition of an existing function with different parameters. Overloading can occur without inheritance.


### Virtual inheritance
> Virtual inheritance is a C++ technique that ensures only one copy of a base class's member variables are inherited by grandchild derived classes.
- Ref: [Virtual inheritance](https://en.wikipedia.org/wiki/Virtual_inheritance)
- Ref: [Where in a hierarchy should I use virtual inheritance?](https://isocpp.org/wiki/faq/multiple-inheritance#virtual-inheritance-where)
