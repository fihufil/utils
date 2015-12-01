/*
 * Copyright © 2015 Filip Dorosz.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Filip Dorosz <filip.dorosz@rapidrage.org>
 */

#include <iostream>
#include <vector>

using namespace std;

int main(int argc,char *argv[]){

char character;

	if (argc >= 2) //checking if 2 argv are set
		if (argv[1][0] == '-') character = argv[1][1]; //checking if the first is -

	while(!cin.eof()) { //compute as long as you have input
		string Input; //string for storing input
		string str; //string for storing parts of the string
		vector<string> RevertedArray; //will be storing sepparated array

		cin >> Input;

		if(Input.size()>0) { //only compute if there is actually input
			for(size_t i = 0 ; i < Input.size(); i++ ) {
				if(Input[i]==character) { //if input is the breaking character save small string to array
					RevertedArray.push_back(str);
					str=""; //and then zero the string for future storing
				}
				else{
					string c(1, Input[i]); //convert one charracter from input to one-character-string
					str.append(c); //add that string to the end of str
				}
				if(i==Input.size()-1) { //if we are behind last dot,coma,whatever append the remaining
					RevertedArray.push_back(str);
					str="";
				}
			}
			int MaxSize = RevertedArray.size(); //yeah i know
			for(int j = MaxSize-1; j >= 0 ; j-- ) { //print array backwards
				cout<<RevertedArray[j];
				if(j!=0) cout<<character; //print that character unless its the end of the string
			}
			cout<<endl;
		}
	//wait for new input
	}


return 0;

}
