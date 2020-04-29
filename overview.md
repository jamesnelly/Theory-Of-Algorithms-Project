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




## Complexity 





## References 
