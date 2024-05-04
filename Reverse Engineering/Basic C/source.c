1   #include 
2   #include 
3
4   int main()
5   {
6 	         char password[9];
7	
8	           printf("Enter the correct password to get the flag: ");
9	
10		     scanf("%s", password);
11	
12		     if (strcmp(password, "B4s1c_C?") == 0)
13		     {
14		          printf("Correct!\nHere is your flag: CTFPrep{%s}", password);
15		     }
16			   else
17		     {
18		          printf("Wrong password!");
19			   }
20 }


