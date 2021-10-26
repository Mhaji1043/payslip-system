 /*
 project:payslip program
 Author:Mohamed Ahmed Haji
 Date:Oct,2021
 compiler:GCC
 Language:C99
 License:MIT*/
 #include <stdio.h>
 int main()
 { //variable declaration
 char name[100];
 int emp_no,hours;
 int normal_pay ,overtime_pay,gross;
 float tax,net= 1000;
 //Capture input//
 printf("Gitongas Factory payslip system!\n")
 printf("Employee Name: ");
 gets(name);
 printf ("Employee Number : ");
 scanf(;%d", & emp_no);
 printf("hours worked
 scanf(;%d", &hours);
 //Computation
 if(hours>40) {
 normal_pay = 40*rate;
 overtime_pay = (hours -40)*1.5*rate;
}
 else {
 normal_pay =hours * rate;
33 overtime_pay =0;
34 }
gross =normal_pay +overtime_pay;
tax=0.16*gross;
net= gross -tax;
 //print payslip
printf("Emp No: \t%d\n",emp_no);
printf("Employee Name: \t%s\n"'name); ");
printf("Normal Pay: \t%d\n",normal_pay);
printf("Overtime pay: \t%d\n"overtime_pay);
printf("Gross pay: \t%f\n",gross);
printf("Tax: \t%s\n"'tax);
printf("Net pay: \t%s\n"'net); ");
