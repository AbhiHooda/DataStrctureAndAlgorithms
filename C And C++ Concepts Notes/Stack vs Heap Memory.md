Stack vs Heap Memory
	Stack Allocation: The allocation happens on contiguous blocks of memory. We call it a stack memory allocation because the allocation happens in the function call stack. The size of memory to be allocated is known to the compiler and whenever a function is called, its variables get memory allocated on the stack. And whenever the function call is over, the memory for the variables is de-allocated. This all happens using some predefined routines in the compiler. A programmer does not have to worry about memory allocation and de-allocation of stack variables. This kind of memory allocation is also known as Temporary memory allocation because as soon as the method finishes its execution all the data belonging to that method flushes out from the stack automatically. This means any value stored in the stack memory scheme is accessible as long as the method hasn’t completed its execution and is currently in a running state.


	Stack memory allocation is considered safer as compared to heap memory allocation because the data stored can only be accessed by the owner thread.
	Memory allocation and de-allocation are faster as compared to Heap-memory allocation.
	Stack memory has less storage space as compared to Heap-memory.


	Heap Allocation: The memory is allocated during the execution of instructions written by programmers. Note that the name heap has nothing to do with the heap data structure. It is called a heap because it is a pile of memory space available to programmers to allocate and de-allocate. Every time when we made an object it always creates in Heap-space and the referencing information to these objects is always stored in Stack-memory. Heap memory allocation isn’t as safe as Stack memory allocation because the data stored in this space is accessible or visible to all threads. If a programmer does not handle this memory well, a memory leak can happen in the program.

	The processing time(Accessing time) of this memory is quite slow as compared to Stack-memory.
	Heap memory is also not as threaded-safe as Stack-memory because data stored in Heap-memory are visible to all threads.
	The size of the Heap-memory is quite larger as compared to the Stack-memory.
	Heap memory is accessible or exists as long as the whole application(or java program) runs.