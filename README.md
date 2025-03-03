# CornerGrocer

This project was written to provide an app that allows Corner Grocer to track purchases of produce and display these purchases either as numerical values or as a histogram.

I implemented the baseline-required code well, but I feel I could have done better by providing different services and features to enhance the look and feel of the program.

For example, currently the program appends searches to the bottom of the list if they return 0 amounts. While this is useful for people to see what they have searched for, I feel it is ultimately unneeded and

can make the list confusing during use. Making this change would allow the program to flow better and be easier to understand for the end user.

The most difficult portion of the code to write was coding the histogram display. This was difficult to do because, although it used the same code from displayFrequency, it needed to add an iterator to ensure that the display was calculated and displayed correctly.

This took some time to work out how to do it and code it properly. Stack Overflow and the understanding I now have about iterating through objects are things I am adding to my support network and code understanding.

The iteration I had to do and the ways that I needed to loop through objects and lists to ensure things were displayed correctly are going to very easily carry over to the next terms and classes. Further, they will help in personal projects to streamline my coding and personal understanding.

For readability, I included inline comments before each code block. For maintainability I ensured that each function and class was clearly defined and comments were added to aid understanding of what the classes or functions do.

For adaptability, the main has the least amount of code to ensure it is simply making calls and does not get confusing with everything in the main. This allows further classes and functions to be written in their own sections and simply called from the main in the future.