# MD5 digest algorithm 

## **The problem given**
***You must write a program in the C programming language that calculates
the MD5 hash digest of an input. The algorithm is specified in the Request
For Comments 1321 document supplied by the Internet Engineering Task
Force. The only pre-requisite is that your program performs the algorithm
— you are free to decide what input the algorithm should be performed on.
I suggest you allow the user to input some free text or a filename via the
command line.***


## **what is the MD5 Algorithm ?**
***The MD5 message-digest algorithm is a widely used hash function producing a 128-bit hash value. 
Although MD5 was initially designed to be used as a cryptographic hash function, i
t has been found to suffer from extensive vulnerabilities. It can still be used as a checksum to verify data integrity, 
but only against unintentional corruption. It remains suitable for other non-cryptographic purposes***


## **My MD5 Program**
***The MD5 algoritim I have designed is relatively quick. I tried to follow the Rfc as best I could. I implemneted all the steps that were given in the Rfc. At times it was difficult to wrap my head around the concept but slowly it started to make some sense. For the user to interact with it program they will have to compile it first in the command line. i have explained this in the overview.md file. The program takes command line arguments. There is the option of --help which describes the program. The other two options are --test which test 5 different strings that I have setup in the program. It will output the message digest of ther 5 strings, with reference to what strings are being tested above. the next option is the --input, this will gaive the user a chance to enter there own string into the program. In turn it will output the message digest for the string that was entered. If none of these commands are entered the program will throw an error saying that this command does not exist***
