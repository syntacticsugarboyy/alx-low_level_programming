Automatic allocation is completely handled by the computer system. Dynamic allocation gives the user control over the memory allocation of a program in the system's memory, one can then allocate space, free the space when done. This is a bit risky as there can be memory leaks, segmentation issues or wrong code could even force the operating system to terminate the program.

malloc - short for manual allocation allows users to manually allocate memory for their programs.

free is a function that removes the manually allocated space when the program is completed. All manually allocated space must be freed to avoid memory leaks.

malloc comes in handy especially in functions where sizes of arrays cannot be presumed. malloc helps increase portability of functions by allowing dynamic sizing of memory space occupied by the function.

valgrind is memory debugger as the -Wall -Werror flags are code debuggers. valgrind looks for memory leaks and profiling and can be very helpful when coding large complex programs.
