# CS303-Assignment-2

Since the assignment has two portions, I split up the work into two parts but put it all in one projects on Visual Studios. 
The main.cpp file contains the declarations and printing of the functions for the single linked list and the classes portion. I have them titled as so.

The company.cpp and company.h include code for the classes portion of the assignment. I created a parent employee class that contains details that pertain to both, professional and non profession employees, such as their name and employee ID. There are also getters and setters that go along with the name and employee ID.
There are two child classes, one for professional and one for nonprofessional. The main difference is that the nonprofessional employees get their hourly rate passed in that then has to be converted by multiplying the hours they worked to find their total weekly salary. The professional employee just has to divide their salary by 4 to get their weekly salary. 

I did not find the need to use a .cpp file for the single linked list, I might be wrong in that implementation but my code does run fine. I created a struct called Node that contains the data and pointers for the Node. I followed the instructions from the powerpoint notes and youtube to further create this part of the assignment. 
I went through and created the single_linked_list with the head, tail, and num_items and set them to their default values. Under that, I have all of the functions and the code to run them. I decided to add in a print function to show what my linked list would look like while the code is running. 

I created two different linked lists, one called linkedList and second is called secondList to show different types of output. I run some functions and print randomly to ensure the code is running correctly with all the push_front, push_back, pop_front, pop_back, etc functions.

I created one professional employee and one nonprofessional employee to see how they both run as well. ![Screenshot 2023-03-06 153550](https://user-images.githubusercontent.com/112524824/223236365-8a1bf6f1-a8a3-45fc-a1a2-04931e443ab2.png)
![Screenshot 2023-03-06 153550](https://user-images.githubusercontent.com/112524824/223236460-058279b5-a667-46e3-8dcd-ef5180b2f1af.png)


I believe the pictures should load, please let me know if the screenshot isn't popping up. 
