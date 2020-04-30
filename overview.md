# Overview of Project

### Student Number: G00346996
### Student Name: James Nelly



## Introduction

**This is my introduction to the project. The assignment we were given to do was to write a program in C programming language that will
calculates the MD5 hash digest of an input. The algorithm is specified in the Request For Comments 1321 document supplied by the Internet Engineering Task Force.**

**In my respository you will find 2 folders MD5 folder which contains the code for the MD5 algorithm, I will go into more depth about the 
MD5 algorithm in another section. The second folder is SHA_256 in this folder its conatains various exmaples in the
C programming language on elements that we covered in our semester in theory of algorithms.**

**Also in my repository I have a document with some research that i did for the assignment also there is my readme.md 
where i will brifely explain the project and summarise  it.**

<br />
<br />

## Run
**To run the MD5 program you will have to follow these following steps that I have outlined. These commands will be inputed in to the command line**

- Step 1: You will have to cd into the Theory-Of-Algorithms-Project.

- Step 2: Then you will do the same with the MD5 folder cd into that.

- Step 3: Next you will have to compile the the program with this command. **"gcc -o md5 md5.c"**

![GitHub Logo](/images/img1.png)

- Step 4: To run the program from the command line you will have to enter this. **"./md5 (input argument)"**

- Step 5: There is a list of input arguments you can choose from

<br />

1. **The first argument is --help** 
This command when entered will output some useful information about the program and will give you insructions on the other arguments you can use.

![GitHub Logo](/images/img2.png)
<br />
<br />

2. **The second argument is --test**
 When you enter this command it will output five strings, which in turn will be hashed with the respective output underneath the string in hash format 
 
![GitHub Logo](/images/img3.png)
 <br /> 
<br />

3. **The Third argumnet is --input**
This command when entered will output some useful information about the program and will give you insructions on the other arguments you can use.

![GitHub Logo](/images/img4.png)
<br />
<br />



## Test

**To execute the tests its very simple and straight forward once you have compiled the program, you have to input --test in the command line, this argruments then calls the test method in the Main Method. for the test to work correctly I had to make an unsigned array of strings, which them loops over the size of the arrays and implements the hashing of each string and then outputs the MD5 hash value under the string in the output**


![GitHub Logo](/images/img5.png)

<br />

 - **[Test For md5](https://www.md5hashgenerator.com/)**.
 
 **I tested several strings through this hash generator to see if my message digest's were indeed providing the correct hash.**
 **Unfortumatly the hashes I got as a result from my strings im my program do not seem to match the hash generator tester.**
 **For this to happen I have made some eroor in my code along the way.**
 **On the other hand it does give a result of a message digest but not the correct one.**




<br />

## Algorithm 

**The way in which this algorithim is implemented i tried to make it work as similar to the Original RFC implementation as I could.
There a number of steps to follow to implement the M5 algorithim**

### 1. Append Padding Bits

**To Implement this for step for the algorithim. I start a the appending of the bits after the message variable has been assigned a string when then get the length of the string and then its padded. The message is padded as so that its length in bits is congruent to 448, modulo 512. The message is extended so that it is just 64 bits and very close to being a multiple of 512 bits long.**

<br />

### 2. Append Length

**The next step of appending the length is done straight after step 1**

<br />

### 3. Initialize MD Buffer

#### I first initialized my state variables

**int a = 0x67452301;**
<br />
**int b = 0xefcdab89;**
<br />
**int c = 0x98badcfe;**
<br />
**int d = 0x10325476;**
<br />

**I then Initialize hash value for this chunk**
<br />
 **int A = a;**
 <br />
 **int B = b;**
 <br />
 **int C = c;**
 <br />
 **int D = d;**
  <br />
   <br />
   
### 4. Process Message in 16-Word Blocks

 **The next part I defined earlier in the code is the auxilary functions that each take as input
   three 32-bit words and produce as output one 32-bit word. They apply the logical operators and, or, not and xor to the input bits.**
      <br />
      <br />
     **F(X,Y,Z) = XY v not(X) Z**
     <br />
   **G(X,Y,Z) = XZ v Y not(Z)**
       <br />
   **H(X,Y,Z) = X xor Y xor Z**
       <br />
   **f_i(X,Y,Z) = Y xor (X v not(Z))**
       <br />
       
       
 ### The Table

**MD5 further uses a table K that has 64 elements. Element number i is indicated as Ki. The table is computed beforehand to speed up the computations. The elements are computed using the mathematical sin function. All These steps have led to final step whic is the output**
  <br />

### 5. Output
  
  ![GitHub Logo](/images/img8.png)
  
  **After all rounds have been performed, the buffers A, B, C and D contain the MD5 digest, I have placed the output from the varibles in a varible called (function_result) this in turn being done by the rotation of left.**


  <br />

## Complexity 

**At the initial state of the program is accepting the command prompt arguments. The program has three outcomes when it comes to accepting the command prompt arguments.**
 
**Two of these arguments runs the hash algorithm and test its working the remaining the remmaining argument check if the arguement passed is indeed a valid argument. If not the program will tell it does not exist**
 
**The program has the capacity to read in the users string/text to be hashed using this algorithm but has i have also incorporated tests into the program**
 
**I have deatiled how to compile and run the program with the command line arguments in the Run section of the overview**
  
 #### Explaining the code 
 
**First i defined void method called print_hex which will print hash value of the result after evreything has been hashed. This method will not bee called until the very end of the hashing is completed it will the output the result of the string that have been passed throught it.**

**I defined the the shift amount, The shift amounts in each round have been approximately optimized, to yield a faster and avalanche effect. Each round has a repeating sequence of 4 shift amounts,  they will execute over a 16-word block. The shift amounts are passed throught the rounds. They follow like this.**
 <br />
 - 7, 12, 17 and 22 for the round 1
 - 5, 9, 14 and 20 for the round 2
 - 4, 11, 16 and 23 for the round 3
 - 6, 10, 15 and 21 for the round 4
 
 **To compute and generate K I used the mathematical fuction sin, This will genartae the table K which will have 64 elements. The table is computed beforhand to speed up the computations. i is assigned to K.**
 
 
 **The auxiliry functions which there are 4 of. They will each take an input of 3 ,32 bit words and produce an output of one 32 bit word. The result from the auxilary fuctions are passed to the rounds.**
 
 **The contents of the four buffers (A, B, C and D) are now mixed with the words of the input, using the four auxiliary functions (f, g, h and f_i). There are four rounds, each involves 16 basic operations. After this is complete the leftrotate function shifts its bits to the left**
 
 **After all rounds have been completetd the Buffers A B C D contain the MD5 digest of the orgianl output. the digest is then printed out by the print_hex fuction that was mentioned at the start.**
 
 **The main method is the very last method in the program, The main element that is being executed in the main method is eveyting to do with the command line arguments.
 
 **There is a if statement to deal with the differnt command line options that can be entered.**
 
 **When the argument is equal to --help information about the program is printed out in the command line.**
 
 **When the argument is equal to --test 5 different Strings are being tested, they are being assigned in the test fuction and being stored as an unsigned string array of 5 strings in size with max length of 11 characters.**
 
 **The last input in the command line is the --input where the user can input any string they would like to hash**
 

  <br />
   <br />

## References 

 
- **[RFC for MD5](https://www.ietf.org/rfc/rfc1321.txt)**.

**The first was link was very useful I was constatly on this page refering back to the steps and to the code that was given on the page To try and undersatnd this algorithim.**

- **[MD5 cryptographic hash function](https://www.iusmentis.com/technology/hashfunctions/md5/)**.
 
 **This second link I referend back to a lot as it explains how the md5 works its a short explanintion but it brifely explains some of the parts needed for the md5 algorithim**
 
 - **[Rosetta Code MD5](https://rosettacode.org/wiki/MD5)**.
 
 **The Rosetta code website for the md5 for me was valuable as there was many implmentation's of the Md5 algorithims in many different forms of programnming languages. I refered to this a bit when i was implemnting the code as to see it done in other languages I had used before I could then implement it into in code after doing some research on c itself**
 
 
 - **[MD5 Wikipedia](https://en.wikipedia.org/wiki/MD5)**.
 
 **This was useful when I was reading up about the MD5 algoritim and also has some nice Pseudocode on the MD5 aswell**
 
 
  - **[Documenation For C](https://www.programiz.com/c-programming)**.
  
  **This link came in very handy as i was not that knowledgeable of c syntax the documentation helped me with this as anything i was unsure of how to implement i would look it up in the docs**
  
  
 
 
 
 
 
 
 
 
