# SimulatingOOPS_In_C
To see how to implement basic OOPS Design pattern in C language


Introduction
Object-oriented programming (OOP) is not the use of a particular language or a tool. It is rather a way of
design based on the three fundamental concepts:
• Encapsulation – the ability to package data and functions together into classes
• Inheritance – the ability to define new classes based on existing classes in order to obtain reuse and
code organization
• Polymorphism – the ability to substitute objects of matching interfaces for one another at run-time
Although these design patterns have been traditionally associated with object-oriented languages, such
as Smalltalk, C++, or Java, you can implement them in almost any programming language including
portable, standard-compliant C (ISO-C90 Standard[1,2,3,4,5,6]).
NOTES: If you simply develop end-user programs in C, but you also want to do OOP, you probably
should be using C++ instead of C. Compared to C++, OOP in C can be cumbersome and errorprone,
and rarely offers any performance advantage.
However, if you build software libraries or frameworks the OOP concepts can be very useful as the
primary mechanisms of organizing the code. In that case, most difficulties of doing OOP in C can be
confined to the library and can be effectively hidden from the application developers. This document
has this primary use case in mind.
This Application Note describes how OOP is implemented in the QP/C and QP-nano real-time
frameworks. As a user of these frameworks, you need to understand the techniques, because you
will need to apply them also to your own application-level code. But these techniques are not limited
only to developing QP/C or QP-nano applications and are applicable generally to any C program.