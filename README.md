# compiled-ocuris


# What is Ocuris?

Ocuris is an application that aids colorblind and hearing-impaired individuals to recognize color and sound by cue given by their mobile phone. The application would recognize sounds such as a baby's cry, fire alarm, ambulance's siren, and many more additional sounds to be added in the future for the library to grow. The second feature of the application is the color recognizing aspect. Colorblind individuals would take a picture of their interest and select the potion of the photograph that they would like to find out what color it is.

# Features

- Recognize sounds such as a baby's cry, fire alarm, ambulance's siren, and many more additional sounds to be added in the future for the library to grow.
- Select the potion of the photograph to find out what color it is

# Requirements

C++
Aquila library

# Screenshots

![Homepage](https://user-images.githubusercontent.com/95037367/144693726-b2909d85-11a1-4abb-a843-cdf6aa821fd6.JPG)
![Sights](https://user-images.githubusercontent.com/95037367/144693727-8b9a0c80-9e8d-437a-98ac-40dd86181f8e.JPG)
![Hearing](https://user-images.githubusercontent.com/95037367/144693725-4209a73a-21bf-4999-af9e-27165cd21157.JPG)


_______________________________________________________________________________________________________________________________________________________________________



Open a local website using XAMPP.

Start module Apache and MySQL.

Add Ocuris folder inside /xampp/htdocs

Start module Apache and MySQL using XAMPP.

Add Ocuris folder inside /xampp/htdocs

To ensure the database is working, make sure your database is named as “userinfo” and it has 2 subunits named “userinfomation” which contains {“id”}[type int with auto increment], {“name”, “email”, “birthday”, “country”, “gender”}[type varchar(255)]. 
Meanwhile the other subunit is named “inquire” which contains “id”[type int with auto increment], {“firstname”, “lastname”, “email”, “question”}[type varchar(255)].

Once opening the admin for the Apache, click the file named as “test1.html” from there you can start to discover the website.

Meanwhile, for the color detection, click on the color_detection.py inside the Ocuris folder.

Open the file using Visual Studio Code (VSCode).

To run the program, please make sure that you have uploaded an image from the website at the content page.

And then, in the command line inside the VSCode, type “python color_detection.py -i ‘.\uploads\name_of_your_image.extension’ ” Make sure your image file name is correct as well as the extension. Here is an example: “python color_detection.py -i ‘.\uploads\test.jpg’ “

Double left click on the part you want to detect color.

Once you’re done, hit ESC on your keyboard to close the application.
