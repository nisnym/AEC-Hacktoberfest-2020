
![Banner](https://embed-fastly.wistia.com/deliveries/49bd387c40e2c5aada92abdf973bc46d.webp?image_crop_resized=960x540)
# AEC-Hacktoberfest-2020
This repos is created for the students of Asansol Engineering College to get the acquainted to open source contributions. People outside AEC can also contribute.

# HacktoberFest Starter Project

Use this project to make your first contribution to an open source project on GitHub. Practice making your first pull request to a public repository before doing the real thing!

Celebrate [Hacktoberfest](https://hacktoberfest.digitalocean.com/) by getting involved in the open source community by completing some simple tasks in this project.

This repository is open to all members of the GitHub community. Any member may contribute to this project without being a collaborator.

## What is Hacktoberfest?
A month-long celebration from October 1st - 31st sponsored by [Digital Ocean](https://hacktoberfest.digitalocean.com/) and [GitHub](https://github.com/blog/2433-celebrate-open-source-this-october-with-hacktoberfest) to get people involved in [Open Source](https://github.com/open-source). Create your very first pull request to any public repository on GitHub and contribute to the open source developer community.

Register for Hacktoberfest and come back here.

[https://hacktoberfest.digitalocean.com/](https://hacktoberfest.digitalocean.com/)

## Learning Material
The YouTube video below will walk you through setting up Git and GitHub on your computer for Windows so that you can start to use version control and collaboration tools like a pro.

1. [YouTube video](https://www.youtube.com/watch?v=-sMmrYTtQgE&feature=youtu.be)
2. [Setup GIT](https://www.theodinproject.com/courses/web-development-101/lessons/setting-up-git)
3. [Git Basic Commmands](https://www.theodinproject.com/courses/web-development-101/lessons/git-basics)

# How to create a Pull Request

## Fork this repository

Fork this repository by clicking on the fork button on the top of this page.
This will create a copy of this repository in your account.

## Clone the repository

<img align="right" width="300" src="https://raw.githubusercontent.com/nisnym/first-contributions/master/assets/clone.png" alt="clone this repository" />

Now clone the forked repository to your machine. Go to your GitHub account, open the forked repository, click on the clone button and then click the *copy to clipboard* icon.

Open a terminal and run the following git command:

```
git clone "url you just copied"
```
where "url you just copied" (without the quotation marks) is the url to this repository (your fork of this project). See the previous steps to obtain the url.

<img align="right" width="300" src="https://github.com/nisnym/first-contributions/raw/master/assets/copy-to-clipboard.png" alt="copy URL to clipboard" />

For example:
```
git clone https://github.com/this-is-you/first-contributions.git
```
where `this-is-you` is your GitHub username. Here you're copying the contents of the first-contributions repository on GitHub to your computer.

## Create a branch

Change to the repository directory on your computer (if you are not already there):

```
cd first-contributions
```
Now create a branch using the `git checkout` command:
```
git checkout -b <add-your-new-branch-name>
```

For example:
```
git checkout -b add-alonzo-church
```
(The name of the branch does not need to have the word *add* in it, but it's a reasonable thing to include because the purpose of this branch is to add your name to a list.)

## Make necessary changes and commit those changes

Add those changes to the branch you just created using the git add command:
```markdown
git add .
```

Now commit those changes using the `git commit` command:
```
git commit -m "Your custom Message"
```

## Push changes to GitHub

Push your changes using the command `git push`:
```
git push origin <add-your-branch-name>
```
replacing `<add-your-branch-name>` with the name of the branch you created earlier.

## Create a new pull request from your forked repository (Click the `New Pull Request` button located at the top of your repo)
## Wait for your PR review and merge approval!

# Pull Requests / PRs
## First PR/Pull Request)

Your first pull request will be your Name, Branch and Semester to the `name.txt` file.

## Second PR/Pull Request

You will have to write a program using loops and if else statement with the language of your choice and push it to this repository.


## Third PR/Pull Request

Write one more program with the language of your choice but this time add comments. Make sure to use loops and if else statement.

## Fourth PR/Pull Request

Try to do this on your own on some other public repository

Go through the issue tabs for some other repository and try to find issues labelled as `good first issues` or `hactoberfest`. If possible try to solve them and create your fourth PR/Pull Request.

## Swags 
---
### The Original - **DigitalOcean, Intel, and Dev**

- **Swag**: T-shirt, stickers
- **Requirements**: 4 pull requests in any repository
- **How to sign up**: [Hacktoberfest Website](https://hacktoberfest.digitalocean.com)
- **Notes**: All PRs count in all public repositories unless the repo has been marked spam, or the PR is marked as spam or invalid.
---

