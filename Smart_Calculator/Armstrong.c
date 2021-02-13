int Armstrong(int n)
{
   int copy_of_num,sum=0,rem;

   /* Value of variable num would change in the
      below while loop so we are storing it in
      another variable to compare the results
      at the end of program
   */
   copy_of_num = n;

   /* We are adding cubes of every digit
    * and storing the sum in variable sum
    */
   while (n != 0)
   {
      rem = n % 10;
      sum = sum + (rem*rem*rem);
      n = n / 10;
   }

   /* If sum of cubes of every digit is equal to number
    * itself then the number is Armstrong
    */
   if(copy_of_num == sum)
      return 1;
   else
     return 0;

}
