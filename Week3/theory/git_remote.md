1) ## In order to check all the remote urls from where we can pull or push data to we use the command ```git remote -v``` to list all the urls that we can pull or push to

2) ## In order to see more information related to remote branches use the command ```git remote show origin```

3) ## In order to see all the branches that our git repo is currently tracking we use the command ```git branch -r``` 

4) ## In order to fetch updates but not merge them with our local branch we use the ```git fetch``` command. This command lets us download all the changes and verify them. After that we can use the ```git merge``` command to merge all the downloaded changes with our current branch.

In case of fetching updates and merging them is such a common task that git gives us one single command called ```git pull``` that does everything in one single command ( ```git fetch``` + ```git merge``` ).

5) In case we want to switch to a different branch of the repo we use the ```git checkout``` command to switch to a different branch and then continue working in our local branch since local branch is now synced with the remote branch

6) When there is merge conflict remove the <<<<<< and the >>>>>> along with ======= symbols and leave the code as it should be after the merge for three way merge a new commit is created that merges the branches together. Use ```git log --graph --oneline ``` to see the graph of the commits
 
