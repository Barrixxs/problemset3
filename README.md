# problemset3
This problem set will introduce you to if/else statements, input failure, and the C++ library iomanip. In this problem set, you
will display a menu to the user, have the user select an option from the menu, check for input failure and invalid inputs from the
user, and perform arithmetic based on the user's selection. Be sure to read this problem set thoroughly, especially the sections of
Collaboration and the Hand-in Procedure.
Collaboration
Collaboration amongst students is allowed to the extent outlined in the syllabus. That being the case, the goal of these
assignments is not to share code, but to learn the tools you need to succeed as a computer scientist. Students are expected to
write their own code free of plagiarism from any other student past or current. All assignments will be cross referenced across
all sections of CS135 using the Measure Of Software Similarity (Moss) to automatically determine the similarity of programs.
Refer to the syllabus for further details and consequences of breaking this policy.
Program: Airport Distance and Slope Calculator
Problem 1
The airplane company you were working with previously loved your original program and decided they want to work with you
to improve it. The airplane company wants to add options so that each time the program is run only one calculation is
performed, and they want to add the option to calculate slope/y-intercept for 2 points. First you need to figure out which
calculation the user wants, you must then run the calculations based on the users input. The airplane company wants your
calculator to perform 3 simple calculations: slope, manhattan distance, and euclidean distance. Your program should also have a
quit option. Your program should display a menu with options for the user to select from. Once you have displayed a menu you
will need to get a selection from the user. Once the selection is taken in it needs to be verified that it is a valid option from the
menu displayed. Build a program that:
1. Displays a menu to the user displaying 4 options:
a. Slope
b. Manhattan Distance
c. Euclidean Distance
d. Quit
2. Takes in a selection based on the displayed menu.
3. Verifies the selection is from the menu, if the selection is not from the menu, output an error message and exit.
To check this problem is complete, verify your program is printing as shown in the example output.
Problem 2
Now that you are able to get valid input from the user you can now add to your program the ability to perform the computations
that the airplane company requested. First we must get data points to run calculations on. For now we can easily get data from
user input via the command line, but this introduces the possibility for user error. We must check the values input to our
program using error checking on the cin fail state. For now we can simply check if the input fails, if so display an error and kill
the program. This input/output should be basically the same as problem set 1 except you also error check the input. One last
thing you need to add is a maximum value range for each your x and y values. For the x values the max is 100, and for the y
values the max is 150. If these maximums are exceeded you should output an error and terminate the program. Add to your
program:
1. The ability to enter 2 data points (x, y) as shown in the example output.
2. Error checking on each user input.
3. Maximum values for each input
a. Maximum for x is 100.
b. Maximum for y is 150.
To check this problem is complete, verify your program is getting the same output as the examples in the example output.
Problem 3
Now that you have data points and a user selection you can easily run desired calculation on the data using conditional
statements on the user’s selection. Your program should run only the calculation that the user selected at the beginning of the
program. One thing to note is that if slope is calculated you must also calculate the y-intercept using the slope and one of the
points. Add to your program:
1. The ability to calculate slope/distance or quit the program based on the user’s selection.
2. The ability to quit the program. Note: This should be done before the data points are entered.
The equation for slope is:
slope = (y2 − y1) / (x2 − x1)
The equation for y-intercept is:
yInt = y1 − (slope * x1)
The equation for manhattan distance is:
manDist = |x2 − x1| + |y2 − y1|
Note: Use fabs for double absolute value.
The equation for euclidean distance is:
eucDist = √(x x ) (y y ) 2 − 1
2 + 2 − 1
2
To check this problem is complete, verify your program is getting the same output as the examples in the example output
