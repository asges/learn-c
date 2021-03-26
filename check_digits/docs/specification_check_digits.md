# Introduction
The program will check a 

## ISBN-10 structure
1. Registration group element, can refer to individual country or a language-
sharing country group such as 0 for Anglophone countries, 1 for Francophone
countries, and so forth.
- can be 1 to 5 digits long
2. Registrant, i.e. publisher
3. Publication element, i.e. the title.
4. checksum or checkdigit: single digit from 0-9 or 'X'.
These four parts are typically represented to the human eye with spaces or
hyphens.

## A valid ISBN 
 A valid ISBN must have the following property:  
The weighted sum of the individual digits is divisible by 11. Here the weighting
is achieved by multiplying each ISBN digit by an integer descending from 10 to 1.
  ** Example from Wikipedia **
  ISBN 0306406152
  weighted_sum = (0 x 10) + (3 x 9) + (0 x 8) + (6 x 7) + (4 x 6) + (0 x 5) +
  (6 x 4) + (1 x 3) + (5 x 2) + (2 x 1)
    = 0 + 27 + 42 + 24 + 0 + 24 + 3 + 10 + 2
    = 132 = 12 x 11

 
