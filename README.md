# Library-Book-Borrowing-System

CSC 4101 Section 1 – 2021 March
Challenge 1 – State Transition Testing
Group Members:
AHMAD KHILFI BIN ZAINI 1723303
MOHAMAT NASRI BIN KARUDIN 1729731

1. Title: Library Book Borrowing System

2. Whether or not the system should accept the request to borrow books from the library depends on three factors:

a. Whether or not the visitor is already registered to the system or not
b. Whether the book is available or not?
c. Whether there are outstanding charges on the visitor
d. Whether the number of borrowed books is below 3 books


3. State transition diagram

Laccept = {TTFF}

Lreject = {F, ,TF, TTT, TTFT}


4. State transition table

| Condition                 	|   	|   	|   	|   	|   	|
|---------------------------	|---	|---	|---	|---	|---	|
| 1. Registered visitor?    	| F 	| T 	| T 	| T 	| T 	|
| 2. Is the book available? 	|   	| F 	| T 	| T 	| T 	|
| 3. Outstanding charge?    	|   	|   	| T 	| F 	| F 	|
| 4. Beyond max book quota? 	|   	|   	|   	| T 	| F 	|
| Action                    	|   	|   	|   	|   	|   	|
| 1. Accept                 	|   	|   	|   	|   	| / 	|
| 2. Reject                 	| / 	| / 	| / 	| / 	|   	|
