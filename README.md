:
					  <div align="left">
<h1>
    <img alt="header" src="/src/assets/Header.png" width="800"></img>
</h1>
Welcome to A December of Algorithms (2019). After the overwhelming response from last year, we present you with a new collection of algorithms to implement this December. Each Day, Each Algorithm ;) Finish them all to get prizes and certificate :)

**Send a pull request only after completing all 31 algorithms.**

**Please submit all PRs on or before January 10th 11:59 PM IST.**

## What Do I Do?
We have a small collection of algorithms, one for every day of the month. Scroll down to take a look at them. All you need to do is fork this repository, implement all 31  algorithms and send a pull request over to us. Check out our FAQ for more information.



## Index
  - [**December 1 - Meet and Greet!**](#december-1---meet-and-greet)
  - [**December 2 - The Convo**](#december-2---The-Convo)


## Algorithms

### **December 1 - Meet and Greet!**
  - **Problem**
    - Sundar is an employee at Google. He comes to office at 9.00hrs and leaves office at 17.00hrs.
    - One day he got a sudden message from a employee to schedule a metting for 1hr. He, Can choose any time between his working hours. But, Sundar is a busy             employee already had several meetings on that day.
    - Develop an algorithm that finds an interval time which is greater than meeting time (i.e) 1hr. So, sundar can fix his meeting accordingly.
  - **Sample Input/Output**
      ```bash
      > Schedule_Time: [ ["0930", "1100"],["1200","1330"],["1530","1630"] ]
      > Sample Output: [ ["1100","1200"],["1330","1530"] ]
      ```
  - **Explanation**
    - He comes to office by 9 the first meeting starts at 9.30 so he can't assign a meeting.
    - The first meeting overs at 10.00 and the next meeting starts at 12.00.Now, He has 1hr gap. So, he can assign a meeting inbetween that.
    - Again he has interval of 2hr between 1330 to 1530 so he can assign a meeting at that time.

  - **NOTE**
    - All times are calculated in 24hrs format.
    - The working hour and meeting time is constant
    - The Input time can be taken in the format of integer or string
  - **Resources**
    - [Python Lists](https://www.w3schools.com/python/python_lists.asp)
    - [C++ Vectors](https://www.geeksforgeeks.org/vector-in-cpp-stl/)

[200~### **December 2 - The Convo
- **Problem**
      - Two friends were talking over the phone. They suddenly started to play a puzzle using the keypad.
          - The keypad contains digits from 2 - 9 inclusive. You have to write a program to return all the possible letter combinations that the number could represent. 
	      - A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters and only 2 character combinations are allowed, first display the characters corresponding to the first number entered and then display the characters corresponding to the second number. 
	          -  ![keypad](/src/assets/keypad.jpg)
		    - **Sample Input/Output**
		          ```bash
			        > ("32")
				        ["da","db","dc","ea","eb","ec","fa","fb","fc"]
![[(C:\Users\TARUN\A-December-of-Algorithms-2020\src\assets\DOA DECEMBER 2.jpeg)


## Maintainers
- [bearlike](https://github.com/bearlike)
- [mahavisvanathan](https://github.com/mahavisvanathan)
- [dhirajv2000](https://github.com/dhirajv2000)
- [aravindr22](https://github.com/aravindr22)
- [Tarun200](https://github.com/Tarun200)



FAQ:
======
  #### Who can join the Challenge?
  Anyone who is passionate about coding and can dedicate a little time a day for the challenge for the next 31 days.

  #### When should I submit the pull request?
  You don't need to submit it everyday. Just submit it once you're done with all 31 algorithms.

  #### What if I'm not able to code every day?
  Not a problem. While coding every day is nice, we understand that other commitments might interfere with it. Plus its holiday season. So you don't have to solve one problem every day. Go at your own pace. One per day or 7 a week or even all 30 in a day.

  #### What language should I use to code?
  Anything! New to C? Best way to practice it. Wanna find out what all this hype about Python is? Use it! Any and all languages are welcomed. Maybe you could try using a different language for every problem as a mini-challenge?

  #### Fork? Pull request? What is all that? I don't know how to use GitHub!
  If you are new to Git or GitHub, check out this [small tutorial from our team](https://github.com/ASS-G/Git-Training-Kit) and [GitHub](https://guides.github.com/activities/hello-world/)

  #### Where are the rest of the problems?
  Our code ninjas are hard at work preparing the rest of the problems. Don't worry, they'll be up soon.

  #### How should I complete these programs?
  We have a folder for each day of the month. Simply complete your code and move the file into that folder. Be sure to rename your file to the following format: `language_username` or `language_username_problemname`
  Some examples:
  `python_exampleUser.py`
  `c_exampleUser.c`
  **Please do not modify any existing files in the repository.**

  #### I forked the repository but some problems were added only after that. How do I access those problems?
  Not to worry! Open your nearest terminal or command prompt and navigate over to your forked repository. Enter these commands:
  ```bash
  git remote add upstream https://github.com/SVCE-ACM/A-December-of-Algorithms-2019.git
  git fetch upstream
  git merge upstream/master
  ```
  If you're curious, the commands simply add a new remote called upstream that is linked to this repository. Then it 'fetches' or retrieves the contents of the repository and attempts to merge it with your progress.
  Note that if you've already added the upstream repository, you don't need to re-add it in the future while fetching the newer questions.

  #### I received a merge error. What do I do?
  This shouldn't happen unless you modify an existing file in the repository. There's a lot of potential troubleshooting that might be needed, but the simplest thing to do is to make a copy of your code outside the repository and then clone it once again. Now repeat the steps from the answer above. Merge it and then add your code. Now proceed as usual. :)

  #### I'm facing difficulties with/need help understanding a particular question.
  Open up an [issue](https://github.com/SVCE-ACM/A-December-of-Algorithms-2019/issues) on this repository and we'll do our best to help you out.

###### [[Back to Top]](#----)

![wave](http://cdn.thekrishna.in/img/common/border.png)
