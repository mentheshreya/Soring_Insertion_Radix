# Soring_Insertion_Radix


Assignment No. 1

Problem Statement-
Consider a student database of SY COMP class (at least 15 records). Database contains different
fields of every student like Roll No, Name and SGPA. 
a. Design a roll call list, arrange list of students according to roll numbers in ascending order
using Insertion Sort 
b. Arrange list of students alphabetically using shell sort 
c. Arrange list of students to find out first ten toppers from a class using Radix sort

Aim:
To create a student database for the SY COMP class and demonstrate sorting algorithms for managing student records.

Objectives:
To implement sorting algorithms for managing a student database by arranging records by roll number, name, and SGPA. This includes using insertion sort, shell sort, and radix sort.

Theory-
1.Algorithm of Insertion sort with one example

Step 1 - If the element is the first element, assume that it is already sorted. Return 1.

Step2 - Pick the next element, and store it separately in a key.

Step3 - Now, compare the key with all elements in the sorted array.

Step 4 - If the element in the sorted array is smaller than the current element, then move to the next element. Else, shift greater elements in the array towards the right.

Step 5 - Insert the value.

Step 6 - Repeat until the array is sorted.

Example: 
Consider an array having elements  : {23, 1, 10, 5, 2} 

Initial: 

 Current element is  23 
 The first element in the array is assumed to be sorted. 
 The sorted part until  0th  index is :  [23] 

 First Pass: 
 Compare  1  with  23  (current element with the sorted part). 
 Since  1  is smaller, insert  1  before  23  . 
 The sorted part until  1st  index is:  [1, 23] 

 Second Pass: 
 Compare  10  with  1  and  23  (current element with the sorted part). 
 Since  10  is greater than  1  and smaller than  23  , insert  10  between  1  and  23  . 
 The sorted part until  2nd  index is:  [1, 10, 23] 
 
Third Pass: 
Compare  5  with  1  ,  10  , and  23  (current element with the sorted part). 
 Since  5  is greater than  1  and smaller than  10  , insert  5  between  1  and  10  
 The sorted part until  3rd  index is  :  [1, 5, 10, 23] 

 Fourth Pass: 
 Compare  2  with  1, 5, 10  , and  23  (current element with the sorted part). 
 Since  2  is greater than  1  and smaller than  5  insert  2  between  1  and  5  . 
 The sorted part until  4th  index is:  [1, 2, 5, 10, 23] 
 
Final Array: 
 The sorted array is:  [1, 2, 5, 10, 23] 

2.Algorithm of shell sort with one example

Step 1 − Start

Step 2 − Initialize the value of gap size, say h. 

Step 3 − Divide the list into smaller sub-part. Each must have equal intervals to h.

Step 4 − Sort these sub-lists using insertion sort.

Step 5 – Repeat this step 2 until the list is sorted.

Step 6 – Print a sorted list.

Step 7 – Stop.

Example:
Unsorted Array:
[12, 34, 54, 2, 3]

Initial Gap = 2:

Compare and sort elements at indices 0 and 2: [12, 34, 54, 2, 3] (no change)
Compare and sort elements at indices 1 and 3: [12, 2, 54, 34, 3] → sorted to: [2, 34, 54, 12, 3]
Compare and sort elements at indices 2 and 4: [2, 34, 3, 12, 54] → sorted to: [2, 3, 54, 12, 34]
Current state: [2, 34, 3, 12, 54]

Reduce Gap to 1:

Perform a standard insertion sort on the entire array:
Compare 34 and 2 → no change
Compare 3 and 34 → swap
Compare 12 and 54 → no change, insert 12 → swap with 34.
Final sorted array: [2, 3, 12, 34, 54]

3.Algorithm of Radix sort with one example

Step 1-Find the largest element in the array, i.e. max. Let X be the number of digits in max. X is calculated because we have to go through all the significant places of all elements.

Step 2- Now, go through each significant place one by one.
Use any stable sorting technique to sort the digits at each significant place. We will use counting sort for this.
Sort the elements based on the unit place digits (X=0)

Step 3-Now, sort the elements based on digits at the tens place.

Step 4- Finally, sort the elements based on the digits at hundreds place.

Example:
Unsorted Array:
[170, 45, 75, 90, 802, 24, 2, 66]

Maximum Number: 802 (3 digits)

Sorting by Each Digit:

Sort by Least Significant Digit (1s place):

Result after sorting: [170, 90, 802, 2, 24, 45, 75, 66]
Sort by Next Digit (10s place):

Result after sorting: [170, 802, 2, 24, 45, 66, 75, 90]
Sort by Most Significant Digit (100s place):

Result after sorting: [2, 24, 45, 66, 75, 90, 170, 802]
Final Sorted Array:
[2, 24, 45, 66, 75, 90, 170, 802]



Conclusion:
In this project, we created an employee database for PCCOE. We used Quick Sort to arrange employees by EMP-ID and Merge Sort to sort them by name

