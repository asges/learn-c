# Introduction
*ISBN* stands for "International Standard Book Number."
The purpose of this checker is to allow users to check if an ISBN is correct.

# Functional requirements
## Minimal functionality and features

- The user will be able to choose to enter a single ISBN into a terminal
on a Linux system as input.
- The user will be also choose to enter the name of a CSV file as input.
- The user can choose to run the program multiple times with different inputs
or exit the program altogether.
- If entering a single ISBN manually into the terminal, the user will receive a 
message in the terminal stating whether the ISBN is correct.
- If entering a csv file, the user will receive a message in the terminal
stating which percentage of the ISBNs were correct. They will receive a CSV file
listing the ISBNS that were incorrect.


## Architectural and Design requirement
### The following three error types will be detected:
1. single errors - One wrong digit has been written, i.e 10 vs 16.
2. format errors - The number has one or more digits fewer than specified.
3. transpositions - two digits have been switched with one another.
These errors have been selected because they account for at least 95% of errors.
(See Wagner, N.R. & P.S. Putter, 1989. "Error detecting decimal digits."
 Communications of the ACM, 32, pp.106-110.)

The system for checking the ISBN must detect 100% of single errors, 100% of
format errors, and 100% of transpositions. The transpositions do not have to
be adjacent.

The system for checking the ISBN will be a single-digit method, in that the
check digit comprises a single digit.

## Non-functional requirements
### Performance
The user will be able to load max 100 ISBNs and will be notified of the limit
### Other
Requirements like usability, reliability, security, supportability are not 
considered for the time being.


