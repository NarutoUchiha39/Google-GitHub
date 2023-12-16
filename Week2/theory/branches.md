1) To make new branch use the commmand ```git branch``` followed by the name of the branch 

2) To switch to that branch use ```git checkout <branch_name>```

3) git combines the process of creating new branch and switching to it with one command called ```git checkout -b <branch_name>```

4) To view all the branches use ```git branch command```

5) To delete a branch use ```git branch -d <branch_name>```

If our branch any unsaved changes git will warn us by throwing an error. If we still want to delete the branch we use the command ```git branch -D <branch_name>```

6) To merge the changes of the ```new branch``` back into the master branch we use ```git checkout master``` followed by ```git merge <branch_name```

7) During the merging process we might run into ```merge conflicts```. What is merge conflicts ? merge conflict is a situation wherein someone has commited in the master branch on a particular line and the same line has been modified in the branch. Now git doesnt know how to combine the two files? keep both of them? Remove one of them?

Now it is programmers duty to decide what to do with the conflict. If we want to abort the merge then use git merge --abort

8) When there are merge conflicts also known as ```three way merge``` you can use the command ```git log --graph --oneline``` to list the conflicts in a graph fashion

9) In case of no merge conflicts git uses a technique called ```fast forwarding``` that merges the heads of various branches into 1 branch  
