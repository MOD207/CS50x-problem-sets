# CS50 Mail
#### Video Demo:  <https://youtu.be/3fyYG7__JW0>
#### Description:
CS50 Mail is a web application that provides users with an easy-to-use email service similar to popular email providers like Gmail. The application is built using several HTML files, each with distinct functions to enable users to manage their email effortlessly.

For instance, the login.html page is a secure login portal where users can log in to their existing accounts. Register.html is where new users can sign up and create new email accounts, while the index.html page displays the inbox where users can access all their received emails.

Compose.html is where users can create and send new emails, and email.html is the page where they can view all the details of an email. Sent.html is where users can access all the emails they've sent, and reply.html allows them to respond to an email. Apology.html is an error page that displays appropriate error messages in case there is an issue with the website.

The layout.html page is a central location where all the layouts used in the other HTML pages are stored. All these pages are connected using the app.py file, which uses Flask, a lightweight Python web framework, to connect the HTML pages to Python code. Flask provides a strong foundation for the application, ensuring that the site is highly responsive and easy to use.

The use of the check_password_hash function from the previous problem set is another essential aspect of ensuring that user passwords are highly secure and protected from unauthorized access. It's a secure way to compare a user's entered password to the stored password hash and is crucial for protecting user data.

SQL was also used in the CS50 Mail project to store all the email information. Storing all email information in an SQL database provides a structured and efficient way to manage and retrieve data for its users. It also provides better data security, as SQL databases are designed to prevent unauthorized access and provide robust data encryption.

CSS is used to style the HTML pages and give them a professional-looking design, enhancing the user experience. The project also provides different pages to allow easy management of email, including viewing and replying to emails, displaying received and sent emails, and showing error messages on error pages.

Overall, the use of Flask, SQL, check_password_hash, and CSS in the CS50 Mail provides a secure foundation for the application to function effectively. The web application is highly responsive, user-friendly, and provides highly secure data management for user email