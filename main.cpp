// first task 👇
// #include <iostream>
// #include <vector>
// #include <fstream>
// using namespace std;
// int main(){
//     ifstream fin("Reals.txt");
//     vector<double> nums;
//     double num;
//     while(fin >> num){
//         nums.push_back(num);
//     }
//     nums.insert(nums.begin()+1, -0.72);
//     for(auto m: nums){
//         cout << m << endl;
//     }
// }



// second task 👇
// #include <iostream>
// #include <vector>
// #include <fstream>
// using namespace std;
// void printvector(const vector <int> x){
//     for(size_t i =0; i <x.size(); i++){
//         cout << x[i]<< " ";
//         cout << endl;
//     }
// }
// int main(){
//     vector<int> v;
//     int number;
//     ifstream fin("numbers.txt");
//     while(fin >> number){
//         v.push_back(number);
//     }
//     v.insert(v.end()-1,120);
//     printvector(v);
// }



// third task 👇
// #include <iostream>
// #include <fstream>
// #include <array>
// using namespace std;
// int main(){
//     ifstream fin("number.txt");
//     const int N =15;
//     array<int,N> arr;
//     for(int i =0; i < arr.size();i++){
//         fin >> arr[i];
//     }
//     int odds=0;
//     for(auto m : arr){
//         if(m % 2 !=0){
//             odds++;
//         }
//     }
//     cout << "კენტი რიცხვების რაოდენობა ფაილში არის "<< odds<< endl;
// }



// fourth task👇
// #include <iostream>
// #include <random>
// #include <ctime>
// #include <algorithm>
// using namespace std;
// void printchars(const vector<short> x){
//     for(const auto value :x){
//         cout << (char)value<< " ";
//         cout << endl;
//     }
// }
// int main(){
//     vector<short> codes;
//     default_random_engine gio(time(NULL));
//     uniform_int_distribution <short> dis( 'a', 'z');
//     for(int i=1; i<=10; i++){
//         codes.push_back(dis(gio));
//         printchars(codes);
//         sort(codes.begin(), codes.end());
//         printchars(codes);
//         cout << "უმცირესია "<< char(codes[0])<< "კოდით "<< codes[0]<< endl;
//         cout << "უდიდესია "<< char(codes[codes.size()-1])<< "კოდით "<< codes[codes.size()-1]<< endl;
//     }
// }



// fifth task 👇(1)
// #include <iostream>
// #include <fstream>
// #include <vector>
// using namespace std;
// int maxindex(const vector <double> v){
//     int maxind=0;
//     for(int i =1;i<v.size(); i++){
//         if(v[maxind] < v[i]){
//             maxind =i;
//         }
//     }
//     return maxind;
// }
// int main(){
//     ifstream fin("data.txt");
//     vector<double> N;
//     double number;
//     while(fin >> number ){
//         N.push_back(number);
//     }
//     fin.close();
//     if (N.size() > 0)	
//     { 
// 	 int index = maxindex(N);
// 	 cout << "Index of maximum element is " << index 
// 	      << "\n maximum element itself = " << N[index] << endl;
//     }    
//     else cout << "Vector is empty!" << endl;
// }



// fifth task 👇(2)
// #include <iostream>
// #include <vector>
// #include <fstream>
// using namespace std;
// int minindex(const vector<double> x){
//     for(int i =1; i<x.size(); i++){
//         int minindex=0;
//         if(x[minindex] > x[i]){
//             minindex=i;
//         }
//         return minindex;
//     }
// }
// int main(){
//     ifstream fin("data.txt");
//     vector<double>vec;
//     double number;
//     while(fin >> number){
//         vec.push_back(number);
//     }
//     fin.close();
//     if( vec.size() > 0){
//         int index =minindex(vec);
//         cout << "მინიმალური ელემენტის ინდექსი არის "<< index<<"\n და მინიმალური ელემენტი არის "<< vec[index]<< endl;
//     }
// }



// sixth task (1)  👇
// #include <iostream>
// #include <vector>
// #include <fstream>
// using namespace std;
// void print(const vector<double>x){
//     for(const auto a: x){
//         cout << a << ' ';
//         cout << endl;
//     }
// }
// int main(){
//     ifstream fin("reals.info");
//     vector <double> nums;
//     double num;
//     while(fin >> num){
//         nums.push_back(num);
//     }
//     cout << "ვექტორში არსებული რიცხვებია\n ";
//     print(nums);
//     cout << "ვექტორში არსებული რიცხვები წაშლის შემდეგ \n ";
//     nums.erase(nums.end()-2);
//     print(nums);
// }



// sixth task (2) 👇
// #include <iostream>
// #include <fstream>
// #include <vector>
// using namespace std;
// void print(const vector<double>x){
//     for(const auto m : x){
//         cout << m << ' ';
//         cout <<endl;
//     }
// }
// int main(){
//     ifstream fin("reals.info");
//     vector<double> nums;
//     double num;
//     while(fin >> num){
//         nums.push_back(num);
//     }
//     cout << "ვექტორში არსებული რიცხვებია\n ";
//     print(nums);
//     cout << "ვექტორში არსებული რიცხვები წაშლის შემდეგ \n ";
//     nums.erase(nums.end()-4);
//     print(nums);
// }



// seventh task 👇
// #include <iostream>
// #include <vector>
// using namespace std;
// void print(const vector<int>x){
//     for(auto m: x){
//         cout << m << " ";
//         cout << endl;
//     }
// }
// int main(){
//     vector<int>N;
//     int num;
//     cout << "შემოიტანეთ 20 მთელი რიცხვი \n";
//     for(int i =0;i< 20;i ++){
//         cin >> num;
//         N.push_back(num);
//     }
//     cout << "თქვენ მიერ შეყვანილი რიცხვებია \n";
//     print(N);
//     N.erase(N.begin()+15);
//     cout << "მე-15 ელემენტის წაშლის შემდეგ \n";
//     print(N);
//     cout << "შემოიტანეთ რიცხვი რომ ჩავსვათ მე-7 ელემენტად \n";
//     int n;
//     cin >> n;
//     cout << "მე-7 ელემენტის ჩასმის შემდეგ \n";
//     N.insert(N.begin()+7,n );
//     print(N);
// }



// eight task 👇
// #include <iostream>
// #include <vector>
// #include <fstream>
// using namespace std;
// void print(const vector<int>x){
//     for(const auto m: x){
//         cout << m << " ";
        

    
//     }
//     cout << endl;
// }
// int main(){
//     ifstream fin("sorted.txt");
//     vector<int>nums;
//     int num;
//     while(fin >> num){
//         nums.push_back(num);
//     }
//     int z;
//     cout << "შემოიტანეთ მთელი რიცხვი რომ დავამატოთ \n";
//     cin >>z;
//     if(z> nums[nums.size()-1]){
//         nums.push_back(z);
//     }
//     else{
//         int i=0;
//         while(z> nums[i]){
//             i++;
//         }
//         nums.insert(nums.begin()+i,z);
//     }
//     cout << "ფაილში წერია შემდეგი რიცხვები "<<endl;
//     print(nums);
// }



// task nine 👇
// #include <iostream>
// #include <fstream>
// #include <vector>
// using namespace std;
// void print(const vector<string> str){
//     for(const auto m : str){
//         cout << m << " ";
//     }
//     cout << endl;
// }
// int main(){
//     ifstream fin("sort.txt");
//     vector <string> strings;
//     string words;
//     while(fin >> words){
//         strings.push_back(words);
//     }
//     cout << " ფაილში წერია შემდეგი რიცხვები "<< endl;
//     print(strings);
//     string word;
//     cout << "შემოიტანეთ ტექსტი "<< endl;
//     cin >> word;
//     if(word > strings[strings.size()-1]){
//         strings.push_back(word);
//     }
//     else{
//         int i =0;
//         while(word > strings[i]){
//             i++;
//         }
//         strings.insert(strings.begin()+i,word);
//         cout << "ფაილში წერია შემდეგი ტექსტები "<<endl; 
//     }
//     print(strings);
// }



// task ten 👇
// #include <iostream>
// #include <fstream>
// #include <vector>
// using namespace std;
// void print(const vector<double> x){
//     for(const auto m : x){
//         cout << m << " ";
//     }
//     cout << endl;
// }
// int main(){
//     ifstream fin("reals.dat");
//     vector <double> nums;
//     double num;
//     while( fin >> num){
//         nums.push_back(num);
//     }
//     cout << "ფაილში ჩაწერილი რიცხვებია\n";
//     print(nums);
//     double z;
//     cout << "შემოიტანეთ ნამდვილი რიცხვი"<< endl;
//     cin >> z;
//     size_t i;
//     for( i=0;i<nums.size(); i++){
//         if(z == nums[i])break;
//     }
//     if(i==nums.size()){
//         cout << "ასეთი რიცხვი არ არის ვექტორში "<< endl;
//     }
//     else{
//         nums.erase(nums.begin()+i);
//         cout << "წაშლის შემდეგ დარჩენილი ელემენტებია "<< endl;
//         print(nums);
//     }
// }



// task eleven 👇
// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;
// int main(){
//     vector <int> nums;
//     int num;
//     cout << "შემოიტანეთ მთელი რიცხვები \n";
//     while(cin >> num){
//         nums.push_back(num);
//     }
//     int maxeven=INT_MIN;
//     int maxevenindex =0;
//     int count =0;
//     for(int i=0;i< nums.size();i++){
//         if(nums[i] %2==0){
//             count++;
//             if(nums[i]> maxeven){
//                 maxeven = nums[i];
//                 maxevenindex=i;
//             }
//         }
//     }
//     if(count >0){
//         cout << "ლუწ ელემენტებს შორის მაქსიმალურის ინდექსია "<< maxevenindex << endl;
//     }
//     else {
//         cout << "ლუწი რიცხვები არ გვაქვს ჩანაწერში "<< endl;
//         cout << "ჩაწერილი რიცხვების რაოდენობაა "<< nums.size()<< endl;
//     }
// }



// task thirteen 👇
// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;
// int main(){
//     vector<int> nums;
//     cout << "შემოიტანეთ მთელი რიცხვები \n";
//     int num;
//     while(cin >> num ){
//         nums.push_back(num);
//     }
//     int max=INT_MIN;
//     int maxind=0;
//     int count=0;
//     for(int i=0;i<nums.size();i++){
//         if(nums[i] %7==0){
//             count++;
//             if(nums[i]  > max){
//                 max= nums[i];
//                 maxind=i;
//             }
//         }
//     }
//     if(count>0){
//         cout << "ამ ვექტორში 7-ის ჯერადი  უდიდესი რიცხვია "<<max 
//         <<" და მისი ინდექსია "<< maxind<< endl;
//     }
//     else{
//         cout << "ამ ვექტორში 7-ის ჯერადი რიცხვები არ არის\n";
//         cout <<"ამ ვექტორის ზომაა "<< nums.size()<< endl;
//     }
// }



// task fourteen 👇
// #include <iostream>
// #include <vector>
// #include <fstream>
// using namespace std;
// int main(){
//     vector<int>nums;
//     int num;
//     ifstream fin("ints.dat");
//     while(fin >> num){
//         nums.push_back(num);
//     }
//     int min=INT_MAX;
//     int minind=0;
//     int count=0;
//     for(int i =0;i<nums.size();i++){
//         if(nums[i] %2!=0){
//             count++;
//             if(nums[i]< min){
//                 min = nums[i];
//                 minind=i;
//             }
//         }
//     }
//     if(count>0){
//         cout << "ამ ვექტორში უდიდესი კენტი რიცხვია "<<min 
//         <<" და მისი ინდექსია "<< minind<< endl;
//     }
//     else{
//         cout << "ამ ვექტორში კენტი რიცხვები არ არის\n";
//         cout <<"ამ ვექტორის ზომაა "<< nums.size()<< endl;
//     }
// }



// task fifteen 👇
// #include <iostream>
// #include <fstream>
// #include <vector>
// using namespace std;
// int main(){
//     ifstream fin("data.in");
//     vector<double>nums;
//     double num;
//     while(fin >> num){
//         nums.push_back(num);
//     }
//     int count;
//     int min = INT_MAX;
//     int minind=0;
//     for(int i=0;i <nums.size(); i++){
//         if(nums[i] >25){
//             count++;
//             if(nums[i] < min){
//                 min =nums[i];
//                 minind=i;
//             }
//         }
//     }
//     if(count>0){
//         cout << "ამ ვექტორში 25 ზე მეტი უმცირესი რიცხვია "<<min 
//         <<" და მისი ინდექსია "<< minind<< endl;
//     }
//     else{
//         cout << "ამ ვექტორში 5 ზე მეტი რიცხვები არ არის\n";
//         cout <<"ამ ვექტორის ზომაა "<< nums.size()<< endl;
//     }

// }



// task sixteen 👇
// #include <iostream>
// #include <fstream>
// #include <vector>
// #include <string>
// using namespace std;
// int main(){
//     ifstream fin("words.txt");
//     vector<string>str;
//     vector<string> longwords;
//     string word;
//     while(fin>> word){
//         str.push_back(word);
//     }
//     int count=0;
//     for(int i =0;i<str.size(); i++){
//         if(str[i].size() > 5){
//             longwords.push_back(str[i]);
//             count++;
//         }
//     }
//     if(count > 0){
//         cout << "5-ზე მეტი სიმბოლოსგან შედგენილი სიტყვებია"<< endl;
//         for(auto m : longwords){
//             cout << m<< endl;
//         }
//     }
//     if(count ==0){
//         cout << "5-ზე მეტი სიმბოლოსგან შედგენილი სიტყვები არ არის ფაილში "<< endl;
//         cout << "ვექტორის სიგრძეა "<< str.size()<< endl;
//     }
// }



// task eightten 👇
// #include <iostream>
// #include <fstream>
// #include <string>
// #include <vector>
// using namespace std;
// void findword(vector <string>& x){
//     int count=0;
//     for(int i=0;i<x.size();){
//         if(x[i]=="war"){
//             x.erase(x.begin()+i);
//             count++;
//         }
//         else {
//             i++; 
//         }
//     }
//     if(count==0){
//             cout << "სიტყვა war ამ ფაილში არ წერია "<< endl;
//         }
//     else{
//         cout << "სიტყვა war ამ ფაილში წერია "<< endl;
//     }
// }
// void print(const vector<string>y){
//     for(const auto m: y){
//         cout << m << endl;
//     }
// }
// int main(){
//     ifstream fin("words.in");
//     vector <string> words;
//     string word;
//     while(fin >> word){
//         words.push_back(word);
//     }
//     cout << "ფაილში არსებული სიტყვები არის \n";
//     print(words);
//     findword(words);
//     cout << "ფაილში დარჩენილი სიტყვები არის \n";
//     print(words);
// }



// task nineteen 👇
// #include <iostream>
// #include <fstream>
// #include <vector>
// #include <string>
// using namespace std;
// void addword(vector <string>& x){
//         x.insert(x.begin(), "Peace");

// }
// void print(const vector <string>y){
//     for(const auto m : y){
//         cout << m << endl;
//     }
// }
// int main(){
//     ifstream fin("words.info");
//     vector <string> str;
//     string word;
//     while(fin >> word){
//         str.push_back(word);
//     }
//     cout << "ფაილში არსებული სიტყვები არის \n";
//     print(str);
//     addword(str);
//     cout << "სიტყვის დამატების შემდეგ ფაილში არსებული სიტყვებია \n";
//     print(str);
// }