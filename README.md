# compiled-ocuris

Open a local website using XAMPP.
Start module Apache and MySQL.
Add Ocuris folder inside /xampp/htdocs
Start module Apache and MySQL using XAMPP.
Add Ocuris folder inside /xampp/htdocs
To ensure the database is working, make sure your database is named as “userinfo” and it has 2 subunits named “userinfomation” which contains {“id”}[type int with auto increment], {“name”, “email”, “birthday”, “country”, “gender”}[type varchar(255)]. Meanwhile the other subunit is named “inquire” which contains “id”[type int with auto increment], {“firstname”, “lastname”, “email”, “question”}[type varchar(255)].
Once opening the admin for the Apache, click the file named as “test1.html” from there you can start to discover the website.
Meanwhile, for the color detection, click on the color_detection.py inside the Ocuris folder.
Open the file using Visual Studio Code (VSCode).
To run the program, please make sure that you have uploaded an image from the website at the content page.
And then, in the command line inside the VSCode, type “python color_detection.py -i ‘.\uploads\name_of_your_image.extension’ ” Make sure your image file name is correct as well as the extension. Here is an example: “python color_detection.py -i ‘.\uploads\test.jpg’ “
Double left click on the part you want to detect color.
Once you’re done, hit ESC on your keyboard to close the application.
