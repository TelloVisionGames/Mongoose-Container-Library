#pragma once

namespace MCL
{
	namespace Types
	{

#pragma region ADT Bag
		// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		// :::::::::::::::::::::::::::::::::::::::::::: ADT Bag ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		//	� A fi nite number of objects, not necessarily distinct, in no particular order, and having the same data type. 
		//	� The number of objects in this collection.                                                                    
		// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		// 
		// !!! OPERATIONS !!!
		// 
		//	getCurrentSize()			
		//					Task: Reports the current number of objects in this bag.
		//							Input : None.
		//							Output : The number of objects currently in the bag.
		//	isEmpty()						
		//					Task : Sees whether this bag is empty.
		//							Input : None.
		//							Output : True or false according to whether the bag is empty.
		//	add(newEntry)					
		//					Task : Adds a given object to this bag.
		//							Input : newEntry is an object.
		//							Output : True or false according to whether the addition succeeds.
		//	remove(anEntry)		
		//					Task : Removes an occurrence of a particular object from this bag, if possible.
		//							Input : anEntry is an object.
		//							Output : True or false according to whether the removal succeeds.
		//	clear()				
		//					Task : Removes all objects from this bag.
		//							Input : None.
		//							Output : None.
		//	getFrequencyOf(anEntry)	
		//					Task : Counts the number of times an object occurs in this bag.
		//							Input : anEntry is an object.
		//							Output : The integer number of times anEntry occurs in the bag.
		//	contains(anEntry)		
		//					Task : Tests whether this bag contains a particular object.
		//							Input : anEntry is an object.
		//							Output : True or false according to whether anEntry occurs in the bag.
		//	toVector()			
		//					Task : Gets all objects in this bag.
		//							Input : None.
		//							Output : A vector containing all entries currently in the bag. 
		// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

		class Array_Bag;					// Bag ADT implemented with an array back-end
		class Linked_Bag;					// Bag ADT implemented with a link-based back-end

#pragma endregion ADT Bag
#pragma region ADT Array
		// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		// :::::::::::::::::::::::::::::: Array :: ADT :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		// :::::::: A Container of items whose order and position are indicated by index :::::::::::::::::::::::::::::::::::::
		// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		class Linked_Array;				// Dynamic memory allocation using Linked Nodes and Pointers
		class Static_Array;				// Array with static memory allocation, set only at compile-time
		class Array_Vector;				// Vector with dynamic memory allocation, array back-end
		class Linked_Vector;			// Vector with Linked Node back-end
#pragma endregion ADT Array
#pragma region ADT List
		// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		// :::::::::::::::::::::::::::::: List :: ADT ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		// :::: A Container of ordered items whose order and position are indicated by index :::::::::::::::::::::::::::::::::::::::::
		// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		class Array_List;
		class Linked_List;
#pragma endregion ADT List
#pragma region ADT Stack

		// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		// :::::::::::::::::::::::::::::: Stack :: ADT :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		// :::::: A container that only allows inspection and removal of the most recently contained element. ::::::::::::::::
		// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		class Array_Stack;				// Stack interface // Array back-end
		class Vector_Stack;				// Stack interface // Vector back-end
		class Linked_Stack;			// Stack interface // Linked-List back end
#pragma endregion ADT Stack





		//class Vector;					// Dynamic Array with more features, type safety and manipulation options
		//
		//class Array_Queue;				// Stack interface // Array back-end
		//class Vector_Queue;				// Stack interface // Vector back-end
		//class PriorityQueue;
		//class LinkedNode_Queue;			// Stack interface // Linked-List back end
		//
		//class Tree;					// Generic Tree : no binary restriction
		//class BinaryTree;				// binary tree
		//class BinarySearchTree;			// Binary Search Tree
		//class Graph;
		//class DirectedGraph;
		//class DirectedAcyclicGraph;		// DAG

	}
	namespace Algorithms
	{

	}
}