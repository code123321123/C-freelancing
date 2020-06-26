# <center>C-freelancing</center>
<br><br><br>

Part A (4 marks)<br>
Implement a function called duplicates_def that:<br>

• Takes an array of C-Strings, called strings1<br>
• Takes a second array of C-Strings, called strings2<br>
• Produces a new array of C-strings that contains all strings that occur in both string1 and<br>
string2.<br>
• Returns the arrays of C-strings that was produced (through either the return value of the<br>
function, or a separate parameter to the function)<br>
For example, if strings1 is the array<br>
[<br>
"8dhg",<br>
"dgf4",<br>
"9ddh"<br>
]<br>
and strings2 is the array<br>
[,<br>
"5*@1",<br>
"9ddh"<br>
]<br>
It will produce and return the following array of C-strings:<br>
[<br>
"9ddh"<br>
]<br>
Implement this function using a defensive programming paradigm. That is, your function should<br>
account for all possible inputs.<br>
Additionally in implementing your function:.<br>
• Choose suitable parameters for the function, so that your it can be fully defensive..<br>
• Choose appropriate types for the .<br>
• Ensure that your function does not crash or seg-fault..<br>
• You may not use any methods of the C++ STL, except for the iostream header file for.<br>
reading/writing to and from standard I/O..<br>


<br><br><br><br>
Part B (3 marks)<br>
Implement a second version of the function in Part A, called duplicates_pbc, using a programmingby-contract paradigm. That is, you should:<br>
• Define a suitable contract for the function.<br>
• Choose suitable parameters for the function, so that your it can be fully defensive.<br>
• Choose appropriate types for the parameters<br>
• Implement the function according to this contract.<br>
• Use suitable C++ language features to enforce compile-time aspects of the contract where<br>
possible.<br>


<br><br><br><br>



Part C (3 marks)<br>
Compare and Contrast your two implementations from Parts A and B. Write the answer to this<br>
question as a comment in the question1.cpp source file.<br>
As part of your comparison, you should write a full C++ program (including main function) that<br>
calls both versions of your functions. Your program should show that both functions work correctly,<br>
and also highly the similarities and differences between both implementations.<br>





<br><br><br><br>



Question 2: Abstract Data Types (10 marks)<br>
Instructions:<br>
• Complete your answers to this question in the files:<br>
– Card.h and Card.cpp<br>
– Deck.h and Deck.cpp<br>
– Pile.h and Pile.cpp<br>
– OrderedList.h and OrderedList.cpp<br>
• Use comments to clearly indicate where the answer to each part is located in the header/source files.<br>
In this course, we have examined list and tree structures using the game Red7 as an example. In<br>
this question, you will design ADTs for 3 variations of a collection of Red7 cards. (Note that you<br>
do not need to be familiar with the rules of Red7 to answer this question). These variations are:<br>
1. A Deck of Red7 Cards<br>
2. A Pile of Red7 Cards<br>
3. An OrderedList of Red7 Cards<br>
These will also be implemented as a class hierarchy, so take careful note of this as it will significantly<br>
affect your design and implementation.<br>
Design & Functionality<br>
To help you in this question, the implementation of an ADT for a Red7 Card has been provided.<br>
This contains useful methods for helping to implement the ADTs. Although you are free to change<br>
this implementation as you desire.<br>
The Deck ADT must function as a stack of Red7 Cards, supporting the following functionality:<br>
1. Add a Red7 Card to the top of the Deck<br>
2. Examine the top card of the Deck<br>
3. Remove the top card of the Deck<br>
4. Check if the Deck is empty (that is, has no cards)<br>
The Pile ADT must function as a list of Red7 Cards, supporting the following functionality:<br>
1. Get the size of the Pile<br>
2. Look at a card at any position within the Pile, using the overloaded operator: operator[]<br>
3. Add a card to the end of the Pile<br>
4. Remove a card from any position within the Pile<br>
The OrderedList ADT must function as an ordered list of Red7 Cards. This is a list where the<br>
cards are kept in increasing order so that they are effectively sorted. The order of the cards is<br>
given by the comparison operator operator< on the Card ADT. The OrderedList should support<br>
the following functionality:<br>
1. Get the size of the OrderedList<br>
2. Add a card to the OrderedList, ensuring the cards are stored in increasing order.<br>
3. Display the cards of the OrderedList in order using the overloaded operator: operator<<<br>
You are free to choose a suitable underlying representation for the ADT(s) from the following list:<br>
Continued . . .<br><br><br><br>


• Single or double-ended linked list<br>
• C++14 STL ordered container (array, vector, list, deque, stack, queue)<br>
• C++14 STL associative container (set, map)<br>
Class Hierarchy<br>
Your implementation must use the following class hierarchy:<br>
• The Pile class must be a sub-class of the Deck class<br>
• The OrderedList class must be a sub-class of the Pile class<br>
Marking (10 marks)<br>
Implement a C++ class for each of the 3 ADTs described above. The marks are distributed as<br>
follows:<br>
• Deck (2 marks)<br>
• Pile (2 marks)<br>
• OrderedList (3 marks)<br>
• ADT design and code re-use (3 marks)<br>
You must not implement any other classes.<br>
You will be marked on the quality of your design, not just the functionality of each class. Therefore<br>
your implementation you should consider:<br>
• Abstraction, such as the scope (public, protected private) of variables and methods to ensuring only the desired functionality is available in the public interface to the ADT.<br>
• Encapsulation, by keeping code to within the most relevant ADT and class.<br>
• Computational efficiency, such that you should avoid computational inefficient operations.<br>
• Minimising code duplication through Code Re-use.<br>
• Minimising re-implementing features across the ADTs.<br>
• Inheritance principles, such as virtual methods, and calling constructors and destructors/<br>
Make sure you briefly describe (in code comments) any choices that you made, as poor choices will<br>
results in a mark deduction.<br>
To help you get started, the following page(s) provide a simple implementation of a Red7 Card,<br>
including suitable comparison operators.<br>




<br><br><b><br>

Question 3: Critical Analysis (10 marks)<br>
Instructions:<br>
• Complete your answers to this question in the files:<br>
– Complete your written analysis in the file question3.pdf<br>
– Complete your code portion in the file question3.cpp<br>
• Provide a clear and concise answer to the question.<br>
The C++14 language has many features and an extensive library in the STL. These give developers<br>
great flexibility in implementing their software, however, these also give a developer significant<br>
avenues to create poor software.<br>
The following are two features from the C++14 language and/or STL:<br>
• C++ Unique pointers (std::unique_ptr)<br>
• Abstract Classes<br>
Discuss how the above two language features can be used to create well-design and error free<br>
software. As part of your discussion you may wish to consider concepts from this course such as<br>
(but not limited to):<br>
• Writing correct and error free software<br>
• Code Re-use<br>
• Memory Management<br>
• Computation Efficiency<br>
• Code Style and Layout<br>
• Abstraction<br>
• Data Structures<br>
• Type Systems<br>
As part of your discussion you must create two code examples:<br>
1. The first code example should use both of the above features to clearly demonstrate show<br>
their benefits. For full marks, this example should combine both features.<br>
2. The second code example should show how the first example could be implemented without<br>
using the above features.<br>
Your discussion should compare and contrast the two code examples.<br>
Limit the discussion to relevant information. You are marked on your ability to be selective, clear,<br>
and complete in the information you choose to provide. Answers that contain incorrect or irrelevant<br>
information may not receive full marks.<br>
Your discussion must be no more than 1 A4, 12pt font, 2cm margins and single-space.<br>
Marking<br>
The marks for this question are divided as follows:<br>
• Discussion (5 marks)<br>
• Code examples (5 marks)<br>
Write your critical analysis in the file question3.pdf, and place your code examples in the file<br>
question3.cpp. Use comments to indicate the various aspects of your code examples.<br>
