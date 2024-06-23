# For loop without a body
This is a very simple program where it takes three (3) numbers from the user as an input and finds the maximum one out of the three. It is not something complicated, but they way it is done is using a for loop without a body!

## How this came around?
I was in class in high school and we had C++ lesson. The teacher wanted us to create a program that will ask the user for three numbers as input and then calculate the maximum one out of the three. The initial solution the teacher wanted us was to construct, was a program with three if...else conditions. While I did that, I also implemented a way to do it using a vector and calling the build-in function max_element of the vector. However, when I bragged about this, it was suggested to me to try and find a quicker way through a for loop without a body. This is the program that is in this repo. Due to the simplicity of the code, I based the results on Visual Studio's analytics to find out details on function calls and lines of code. The table below shows how the various implementations faired:

Description    | If...Else | Vector | for loop (no body)
|:------------:|:---------:|:------:|:-----------------:|
Lines of code  | 23        |  17    |         12
Function calls | 66        | 617    |         66

From the results above, you can see that the for loop without the body has the least lines of code and the smallest number of function calls (albeit is the same as the If...Else program). 
 
## License
This project is licensed under the MIT license.
 