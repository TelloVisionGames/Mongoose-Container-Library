#pragma once

namespace MCL
{
	namespace Bag {

		// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		// :::::::::::::::::::::::::::::::::::::::::::: ADT Bag ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		//	- A finite number of objects, not necessarily distinct, in no particular order, and having the same data type. 
		//	- The number of objects in this collection.                                                                    
		// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
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

		class Array_Bag;					// Bag ADT as defined above, with an Array as the back-end container
		class Linked_Bag;					// Bag ADT as defined above, with Link-Based back-end container


	}
	namespace List {
		// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		// :::::::::::::::::::::::::::::: Sorted List :: ADT :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		//A fi nite number of objects, not necessarily distinct, having the same data typeand ordered by their values.
		//	!!! OPERATIONS !!!
		//			
		//	insertSorted(newEntry) 
		//				Task: Inserts an entry into this sorted list in its proper order so that the list remains sorted.
		//						Input : newEntry is the new entry.
		//						Output : None.
		//	removeSorted(anEntry) 
		//				Task : Removes the fi rst or only occurrence of anEntry from this sorted list.
		//						Input : anEntry is the entry to remove.
		//						Output : Returns true if anEntry was locatedand removed, or false if not.In the latter case, the list remains unchanged.
		// 
		//	getPosition(anEntry) 
		//				Task: Gets the position of the fi rst or only occurrence of anEntry in this sorted list.
		//						Input : anEntry is the entry to be located.
		//						Output : Returns the position of anEntry if it occurs in the sorted list.
		//								Otherwise, returns the position where anEntry would occur in the list, but as a negative integer. 
		// 
		// 
		// --The following operations behave as they do for the <ADT list>
		//	::	isEmpty()
		//	::	getLength()
		//	::	remove(position)
		//	::	clear()
		//	::	getEntry(position)
		// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		
		class Array_List;				// List as described above, implemented with an Array 
		class Linked_List;				// List as described above, implemented with a link-based container.
	}

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
	#pragma region ADT Queue
		// ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		// :::::::::::::::::::::::::::::::::::::::::::: ADT Queue :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		// ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		//	- A finite number of objects, not necessarily distinct, having the same data type and ordered by when they were added.    ::
		// ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		// 
		// !!! OPERATIONS !!!
		// 
		//	
		//	isEmpty()						
		//					Task : Sees whether this queue is empty.
		//							Input : None.
		//							Output : True if the queue is empty; otherwise false.
		//	enqueue(newEntry)					
		//					Task : Adds newEntry at the back of this queue.
		//							Input : newEntry.
		//							Output : True if successful; otherwise false.
		//	dequeue()					
		//					Task : Removes the front of this queue. That is, removes the item that was added earliest.
		//							Input : None.
		//							Output : True if successful; otherwise false. 
		// 
		// peekFront()					
		//					Task : Returns the front of queue without removing or replacing it.
		//							Input : None.
		//							Output : The front of the queue
		// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		class Linked_Queue;
		class Array_Queue;
		

#pragma 	endregion ADT Queue
	#pragma region ADT Priority Queue
// ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// :::::::::::::::::::::::::::::::::::::::::::: ADT Priority Queue ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//	- A finite number of objects, not necessarily distinct, having the same data type and ordered by when they were added.    ::
// ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// 
// !!! OPERATIONS !!!
// 
//	
//	isEmpty()						
//					Task : Sees whether this queue is empty.
//							Input : None.
//							Output : True if the queue is empty; otherwise false.
//	add(newEntry)					
//					Task : Adds newEntry at the back of this priority queue.
//							Input : newEntry.
//							Output : True if successful; otherwise false.
//	remove()					
//					Task : Removes the entry of highest priority from this priority queue.
//							Input : None.
//							Output : True if successful; otherwise false. 
// 
//	peek()					
//					Task : Returns the entry in this priority queue with the highest priority. (Does not alter queue)
//							Input : None.
//							Output : The entry with the highest priority.
// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
		class Sorted_PriorityQueue; // Walls and Mirrors chapter 14.2
		class Heap_PriorityQueue; // Walls and Mirrors chapter 17.3


#pragma 	endregion ADT Priority Queue	
	#pragma region ADT Binary Tree
// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// :::::::::::::::::::::::::::::::::::::::::::: ADT Binary Tree ::::::::::::::::::::::::::::::::::::::::::::::::::::::
// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//	- A finite number of objects in hierarchical order.                                                        
// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// 
// !!! OPERATIONS !!!


//	+isEmpty()	: boolean					
//					Task : Sees whether this binary tree is empty.
//							Input : None.
//							Output : True or false according to whether the binary tree is empty.

//	+getHeight() : integer			
//					Task: Gets the height of this binary tree.
//							Input : None.
//							Output : The height of the binary tree.

//	+getNumberOfNodes() : integer			
//					Task: Gets number of nodes in binary tree
//							Input : None. Assumes the tree is not empty.
//							Output : The number of nodes in the binary tree.

//	+getRootData() : ItemType
//					Task : Gets the data that is in the root of this binary tree.
//							Input : newEntry is an object.
//							Output : The root’s data.
	
//	+setRootData(anEntry) : void
//					Task : Replaces the data item in the root of this binary tree with newData, if the tree is not empty.However, if the tree is empty, inserts a new root node whose data item is newData into the tree.
//							Input : newData is the data item.
//							Output : None.
	
//	+add(newData)	: boolean					
//					Task : Adds a new node containing a given data item to this binary tree.
//							Input : newData is the data item.
//							Output : True if the addition is successful, or false if not.

//	+remove(data)	: boolean		
//					Task : CRemoves the node containing the given data item from this binary tree.
//							Input : data is the data item.
//							Output : True if the removal is successful, or false if not.
	
//	+clear() : void
//					Task : Removes all nodes from this binary tree.
//							Input : None.
//							Output : (The binary tree is empty.)

//	+getEntry(anEntry) : ItemType
//					Task : Gets a specifi c entry in this binary tree.
//							Input : anEntry is the desired data item.
//							Output : The entry in the binary tree that matches anEntry . Throws an exception if the entry is not found.

//	+contains(anEntry)	: boolean	
//					Task : Tests Tests whether the given data item occurs in this binary tree.
//							Input : data is the data item.
//							Output : True if the binary tree contains the given data item, or false if not.
	
//	+preorderTraverse(visit) : void		
//					Task : Traverses this binary tree in preorder and calls the function visit once for each node.
//							Input : visit is a client-defi ned function that performs an operation on or with the data in each visited node.
//							Output : None.

// 
//	+inorderTraverse(visit) : void	
//					Task : Traverses this binary tree in inorder and calls the function visit once for each node.
//							Input : visit is a client-defi ned function that performs an operation on or with the data in each visited node.
//							Output : None.
 
//	+postorderTraverse(visit) : void	
//					Task : Traverses this binary tree in postorder and calls the function visit once for each node.
//							Input : visit is a client-defi ned function that performs an operation on or with the data in each visited node.
//							Output : None.
// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
#pragma endregion ADT Binary Tree
	#pragma region ADT Binary Search Tree
// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// :::::::::::::::::::::::::::::::::::::::::::: ADT Binary Search Tree :::::::::::::::::::::::::::::::::::::::::::::::
// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//	- A finite number of objects in hierarchical order.                                                      
// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// 
// !!! OPERATIONS !!!


//	+isEmpty()	: boolean					
//					Task : Sees whether this binary tree is empty.
//							Input : None.
//							Output : True or false according to whether the binary tree is empty.

//	+getHeight() : integer			
//					Task: Gets the height of this binary tree.
//							Input : None.
//							Output : The height of the binary tree.

//	+getNumberOfNodes() : integer			
//					Task: Gets number of nodes in binary tree
//							Input : None. Assumes the tree is not empty.
//							Output : The number of nodes in the binary tree.

//	+getRootData() : ItemType
//					Task : Gets the data that is in the root of this binary tree.
//							Input : newEntry is an object.
//							Output : The root’s data.

//	+setRootData(anEntry) : void
//					Task : Replaces the data item in the root of this binary tree with newData, if the tree is not empty.However, if the tree is empty, inserts a new root node whose data item is newData into the tree.
//							Input : newData is the data item.
//							Output : None.

//	+add(newData)	: boolean					
//					Task : Inserts newEntry into this binary search tree such that the properties of a binary search tree are maintained.
//							Input : newEntry is the data item to be inserted. Assumes the entries in the tree are distinctand differ from newEntry .
//							Output : True if the insertion is successful, or false if not.

//	+remove(data)	: boolean		
//					Task : Removes the given entry from this binary search tree such that the properties of a binary search tree are maintained.
//							Input : anEntry is the entry to remove.
//							Output : True if the removal is successful, or false if not.

//	+clear() : void
//					Task : Removes all nodes from this binary tree.
//							Input : None.
//							Output : (The binary tree is empty.)

//	+getEntry(anEntry) : ItemType
//					Task : Gets a specifi c entry in this binary tree.
//							Input : anEntry is the desired data item.
//							Output : The entry in the binary tree that matches anEntry . Throws an exception if the entry is not found.

//	+contains(anEntry)	: boolean	
//					Task : Tests Tests whether the given data item occurs in this binary tree.
//							Input : data is the data item.
//							Output : True if the binary tree contains the given data item, or false if not.

//	+preorderTraverse(visit) : void		
//					Task : Traverses this binary tree in preorder and calls the function visit once for each node.
//							Input : visit is a client-defi ned function that performs an operation on or with the data in each visited node.
//							Output : None.

// 
//	+inorderTraverse(visit) : void	
//					Task : Traverses this binary tree in inorder and calls the function visit once for each node.
//							Input : visit is a client-defi ned function that performs an operation on or with the data in each visited node.
//							Output : None.

//	+postorderTraverse(visit) : void	
//					Task : Traverses this binary tree in postorder and calls the function visit once for each node.
//							Input : visit is a client-defi ned function that performs an operation on or with the data in each visited node.
//							Output : None.
// 
// 
// The methods isEmpty , getHeight , getNumberOfNodes , getRootData , clear , getEntry , contains , preorderTraverse , inorderTraverse, and postorderTraverse have the same specifi cations as for a binary tree.
// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
#pragma endregion ADT Binary Search Tree
	#pragma region ADT Heap
// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// :::::::::::::::::::::::::::::::::::::::::::: ADT Heap :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//	- A finite number of objects in hierarchical order.                                                      
// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// 
// !!! OPERATIONS !!!


//	+isEmpty()	: boolean					
//					Task : 
//							Input : 
//							Output : 

//	+getNumberOfNodes() : integer			
//					Task: 
//							Input : 
//							Output : 
//	+getHeight() : int
//					Task :
//							Input : 
//							Output : 

//	+peekTop() : ItemType
//					Task : 
//							Input : 
//							Output : 

//	+add(newData)	: boolean					
//					Task : 
//							Input : 
//							Output : 

//	+remove(data)	: boolean		
//					Task : 
//							Input : 
//							Output : 

//	+clear() : void
//					Task : 
//							Input : 
//							Output : 
//
// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

	class Array_Heap;
	class Linked_Heap;
#pragma endregion ADT Heap

	}
}


