# 42-CPP

My solutions to the **C++ Piscine modules (CPP00 – CPP09)** of the 42 curriculum.
The modules take you from C to object-oriented C++, step by step, using the **C++98** standard.

## Modules

| Module | Topics |
|---|---|
| [CPP-00](CPP-00) | Namespaces, classes, member functions, stdio streams, initialization lists, `static` and `const` |
| [CPP-01](CPP-01) | Memory allocation (`new`/`delete`), pointers to members, references, `switch` |
| [CPP-02](CPP-02) | Ad-hoc polymorphism, operator overloading, Orthodox Canonical Form (fixed-point number class) |
| [CPP-03](CPP-03) | Inheritance |
| [CPP-04](CPP-04) | Subtype polymorphism, abstract classes, interfaces, deep copies |
| [CPP-05](CPP-05) | Exceptions (`try` / `catch`, custom exception classes) |
| [CPP-06](CPP-06) | C++ casts (`static_cast`, `dynamic_cast`, `reinterpret_cast`) |
| [CPP-07](CPP-07) | Templates (function and class templates) |
| [CPP-08](CPP-08) | Templated containers, iterators and algorithms (STL) |
| [CPP-09](CPP-09) | STL in practice: choosing the right container for each problem |

The [CPP_TEST](CPP_TEST) folder has small practice files I used while learning the basics.

## How to build and run

Each exercise has its own `Makefile`:

```bash
cd CPP-02/ex00
make
./<program_name>
```

All exercises compile with `c++ -Wall -Wextra -Werror -std=c++98`.

## What I learned

- Thinking in classes and objects instead of plain functions
- Managing resources safely (constructors, destructors, copy and assignment)
- Using inheritance and polymorphism to write code that is easy to extend
- Writing generic code with templates and the STL
