//how to check the execution time of c++

//  execution time
//auto start = std::chrono::high_resolution_clock::now();   
////	stop measuring time  
//auto end=std::chrono::high_resolution_clock::now();
////std::chrono::duration<float>duration= (end-start) * 1000;
//float timeInSec = std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count();
//std::cout<<"Execution time : "<<timeInSec<<" mili seconds";
//timeInSec = timeInSec/1000;
//std::cout<<"Execution time : "<<timeInSec<<" seconds";



//syntax

//   //starting measuring time
//auto start = std::chrono::high_resolution_clock::now();
//
//	//	stop measuring time  
//auto end=std::chrono::high_resolution_clock::now();
//
////calculate the duration
//std::chrono::duration<double>duration=end-start;
////print the execution time in seconds
//std::cout<<"execution time:"<<duration.count()<<"seconds"<<std::endl;


//function clock return 
//using chrono;

//
//#include<iostream>
//#include<stdio.h>
//#include<chrono>
//using namespace std;
//int main()
//{
//	double sum=0;
//	double add =1;
//
////starting measuring time
//auto begin = std::chrono::high_resolution_clock::now();
//
//int iterations =1000*1000*1000;
//for(int i=0; i<iterations; i++){
//
//	sum+=add;
//   add/=2.0;
//}
////stop measuring time and calculate the elapsed time 
//auto end=std::chrono::high_resolution_clock::now();
//auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end-begin);
//cout<<"Result  : % 20f\n "<<sum;
//cout<<"time measured : %.3f seconds.\n "<<elapsed.count()*1e-9;
//return 0;
//}




//#include<iostream>
//#include<stdio.h>
//#include<chrono>
//using namespace std;
//int main()
//{
////starting measuring time
//auto start = std::chrono::high_resolution_clock::now();
//
//	char letter;
//	cout<<"enter the charcater.";
//	cin>>letter;
//	if(letter>='a' && letter<='z')
//    cout<<"you enetred character in lower case."<<endl;
//	else 
//		cout<<"you enetred character in upper case."<<endl;
////	stop measuring time  
//auto end=std::chrono::high_resolution_clock::now();
//
////calculate the duration
//std::chrono::duration<double>duration=end-start;
////print the execution time in seconds
//std::cout<<"execution time:"<<duration.count()<<"seconds"<<std::endl;
//
//return 0;
//
//}





//#include<iostream>
//#include <stdio.h>
//#include <sys/time.h> 
//int main()
// { 
// double sum = 0; 
// double add = 1; 
// // Start measuring time struct timeval begin, end;
//   gettimeofday(&begin, 0);
//   int iterations = 1000*1000*1000;
//    for (int i=0; i<iterations; i++) 
//	{
//	 sum += add; add /= 2.0;
//	  } 
//	  // Stop measuring time and calculate the elapsed time
//	   gettimeofday(&end, 0);
//	   long seconds = end.tv_sec - begin.tv_sec; 
//	   long microseconds = end.tv_usec - begin.tv_usec; 
//	   double elapsed = seconds + microseconds*1e-6; 
//	   printf("Result: %.20f\n", sum);
//	    printf("Time measured: %.3f seconds.\n", elapsed); 
//		return 0;
//		
//}
//		

//
//diff between if else if and switch
//
//
//
//
//switch                                if else if 
//1-only check the equality             1-it can test for equality asa well as logical expession
//a==10;                                a==10;
//a==20;                                a>30 && a<40;
//a==30;                                 a>30 || a<40;
//
//
//switch(n)                                           
//it use for single expression             it use for multiple expression for multiple choices
//for multipke choices                     cout<<"value is greater rhan 10.";
//{                                         else if(a<10)
//	casew 1;                              cout<<"value is less than 10.";
//	cout<<"friday";
//	break;
//	case 2:
//	cout<<"saturday";
//	break;
//}

//3-it cannot check therange of values         it can check the range of value like as setprecision

//4-it is more compact than if else if         it is less compact than switch

//5-it can only evaluate integer or character  it can evaluate int,float and other data types




//#include<iostream>
//#include<stdio.h>
//#include<chrono>
//using namespace std;
//int main()
//{
////starting measuring time
//auto start = std::chrono::high_resolution_clock::now();
//
//	char status;
//	int senior=400;
//	int junior=275;
//	cout<<"enter the status.";
//	cin>>status;
//	if(status=='s' && status=='S')
//    cout<<"the senior person salary is."<<senior<<endl;
//	else if(status=='j' && status=='J')
//		cout<<"the junior person salary is."<<junior<<endl;
//		else
//		cout<<"invalid output";
////	stop measuring time  
//auto end=std::chrono::high_resolution_clock::now();
//
////calculate the duration
//std::chrono::duration<double>duration=end-start;
////print the execution time in seconds
//std::cout<<"execution time:"<<duration.count()<<"seconds"<<std::endl;
//return 0;
//}





//a program to get three numbers from user for integer value
//a,b,c   if a is not zero find out wether it is common divisor of b and c 
//
//#include<iostream>
//#include<stdio.h>
//#include<chrono>
//using namespace std;
//int main()
//{
////starting measuring time
//auto start = std::chrono::high_resolution_clock::now();
//
//int a,b,c;
//	cout<<"enter the value a b c .";
//	cin>>a>>b>>c;
//	if(a==0)
//	{
//    cout<<"divisor can not be zero"<<endl;
//   }
//   else{
//   	if(b%a==0 && c%a==0)
//   	cout<<a<<"is a common divisor of "<<b<<"and"<<c<<endl;
//   	else
//   	cout<<a<<"is not a  common divisor of "<<b<<"and"<<c<<endl;
//   }
//	//	stop measuring time  
//auto end=std::chrono::high_resolution_clock::now();
//
////calculate the duration
//std::chrono::duration<double>duration=end-start;
////print the execution time in seconds
//std::cout<<"execution time:"<<duration.count()<<"seconds"<<std::endl;
//return 0;
//}




////a program that contain an if statement can be used to computethe area of a squre (area=side*side)
////or triangle (area=1/2*base*heighht )after prompting the user to type the first character of the figure
////name(s or t)
//#include<iostream>
//#include<stdio.h>
//#include<chrono>
//using namespace std;
//int main()
//{
////starting measuring time
//auto start = std::chrono::high_resolution_clock::now();
//
//   char op;
//   int side,base,height;
//   float area;
//	cout<<"enter choice (s for square,t for triangle).";
//	cin>>op;
//	if(op=='s')
//	{
//    cout<<"enter side:"<<endl;
//    cin>>side;
//    area=side*side;
//    cout<<"the area is"<<area;
//   }
//   else if(op=='t')
//   	{
//   	cout<<"enter the base  and height"<<endl;
//   	cin>>base>>height;
//   	area=base*height*0.5;
//   	cout<<"area is"<<area;
//   }
//   else{
//   	cout<<"invalid output";
//   }
//   
   
   
   
//accept the code number as an input  and  display
//the correct disk drive manufacture as follow



//
//#include<iostream>
//#include<stdio.h>
//#include<chrono>
//using namespace std;
//int main()
//{
////starting measuring time
//auto start = std::chrono::high_resolution_clock::now();
//
//   int code;
//    cout<<"code number"<<endl;
//	cout<<"1 for westren digital"<<endl;
//	cout<<"2 for 3m corporattion"<<endl;
//	cout<<"3 for maxil corporation"<<endl;
//	cout<<"4 for sorry corroporation"<<endl;
//	cout<<"5 for verbatim corporation"<<endl;
//	cout<<"enter the code.";
//	cin>>code;
//   switch(code)
//   {
//   	case 1:
//   	cout<<"westren digital";
//   	break;
//   	case 2:
//   	cout<<"corporattion";
//   	break;
//   	case 3:
//   	cout<<"maxil corporation";
//   	break;
//   	case 4:
//   	cout<<"sorry corroporation";
//   	break;
//   	case 5:
//   	cout<<" verbatim corporation";
//   	break;
//   default:
//   	cout<<"invalid"<<endl;
//
//   }
//   
//	//	stop measuring time  
//auto end=std::chrono::high_resolution_clock::now();
//
////calculate the duration
//std::chrono::duration<double>duration=end-start;
////print the execution time in seconds
//std::cout<<"execution time:"<<duration.count()<<"seconds"<<std::endl;
//return 0;
//}
   


//
//#include<iostream>
//#include<stdio.h>
//#include<chrono>
//using namespace std;
//int main()
//{
////starting measuring time
//auto start = std::chrono::high_resolution_clock::now();
//
//
//      char ch;
//    cout<<"movie number"<<endl;
//	cout<<"a for adventure"<<endl;
//	cout<<"c for commedy "<<endl;
//	cout<<"f for family movie"<<endl;
//	cout<<"h for horror "<<endl;
//	cout<<"s for science "<<endl;
//	cout<<"enter the movie categories.";
//	cin>>ch;
//   switch(ch)
//   {
//   	case 'a':
//   	cout<<"you select in adventure movies";
//   	break;
//   	case 'c':
//   	cout<<"you select in commedy movies";
//   	break;
//   	case 'f':
//   	cout<<"you select in family movies";
//   	break;
//   	case 'h':
//   	cout<<"you select in herror movies";
//   	break;
//   	case 's':
//   	cout<<" you select in science movies";
//   	break;
//   default:
//   	cout<<"invalid"<<endl;
//
//   }
//   
//	//	stop measuring time  
//auto end=std::chrono::high_resolution_clock::now();
//
////calculate the duration
//std::chrono::duration<double>duration=end-start;
////print the execution time in seconds
//std::cout<<"execution time:"<<duration.count()<<"seconds"<<std::endl;
//return 0;
//}


//formulas of conversion
//centimeterr=value*2.54
//liters=value*3.785;
//kilometere=value*1.609;
//kg=value*4536;


//#include<iostream>
//#include<stdio.h>
//#include<chrono>
//using namespace std;
//int main()
//{
////starting measuring time
//
//
//
//    float value;
//    char con;
//    cout<<"enter conversion type"<<endl;
//	cout<<"c for centimeter"<<endl;
//	cout<<"l for liters "<<endl;
//	cout<<"k for kilometers"<<endl;
//	cout<<"g for kilograms"<<endl;
//	cout<<"enter the value of conversion.";
//	cin>>value;
//   
//auto start = std::chrono::high_resolution_clock::now();   
//   switch(con)
//   {
//   	case 'c':
//   	case 'C':	
//   	cout<<"value"<<value*2.54;
//   	break;
//   	case 'l':
//    case 'L':
//   	cout<<"value"<<value*3.785;
//   	break;
//   	case 'k':
//   	case 'K':
//   	cout<<"value"<<value*1.609;
//   	break;
//   	case 'g':
//   	case 'G':
//   	cout<<"value"<<value*4536;
//   	break;
//   	
//   default:
//   	cout<<"invalid"<<endl;
//
//   }
//   
//	//   End your custom code
//   /////
//   for(int i=1; i<10000; i++){
//   		for(int j=1; j<10000; j++){
//   		}
//   }
////	stop measuring time  
//auto end=std::chrono::high_resolution_clock::now();
////std::chrono::duration<float>duration= (end-start) * 1000;
//float timeInSec = std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count();
//std::cout<<"Execution time : "<<timeInSec<<" mili seconds";
//timeInSec = timeInSec/1000;
//std::cout<<"Execution time : "<<timeInSec<<" seconds";
//
//return 0;
//}


//  execution time
//auto start = std::chrono::high_resolution_clock::now();   
////	stop measuring time  
//auto end=std::chrono::high_resolution_clock::now();
////std::chrono::duration<float>duration= (end-start) * 1000;
//float timeInSec = std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count();
//std::cout<<"Execution time : "<<timeInSec<<" mili seconds";
//timeInSec = timeInSec/1000;
//std::cout<<"Execution time : "<<timeInSec<<" seconds";

   
