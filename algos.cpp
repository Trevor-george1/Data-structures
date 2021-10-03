#include <iostream>
using namespace std;

class Myarray {
	
	private:
	int x[10];
		
	public:
		void insert() {
			for(int i=0; i<10; i++){
				
				cout<<"Enter a value for x in position :"<<i<<endl;
				cin>>x[i];
			}
		}
		
		void display() {
			for(int j=0; j<10; j++){
				
			cout<<x[j]<<endl;
			}
		}
		
		void serach() {
			int a;
			cout<<"Enter number to search :";
			cin>>a;
			for(int k=0; k<10; k++){
				if(a == x[k]) {
				
					cout<<x[k]<<endl;
				}
				
				}
			}
			
		// Delete 
		//1. search.
		//2. Move the rest one step forward.
		
		int mydelete() {
			int f;
			cout<<"Enter a number to delete: ";
			cin>>f;
			
			for(int k=0; k<10; k++) {
				if (f==x[k]) {
					for(int n=k; n<9; n++ ) {
						x[n] = x[n+1];
						
					return 0;	
						
					}
				}
			}
				cout<<"Could not find te number"<<endl;
			
		}


		int orderedinsert() {
			int key, j;
			for(int i=0; i<10; i++) {
				key = x[i];
				j = i -1;

		
			}
			while(j >= 0 && x[j] > key) {
				x[j] = x[j+1];
				j = j -1;


			}

			x[j+1] = key;
			return 0;

	 	}



		int binarysearch () {
		int a, l=0, u=9, m;
		
		cout<<"Enter the number you're searching";
		cin>>a;
		
		while(true) {
			m = (l + u)/2;
			if(x[m] == a) {
				cout<<"Number found"<<endl;
				return 0;
			}
			
			else if(l >m) {
				cout<<"Number not found"<<endl;
				return 0;
			}
			
			else{
				if(x[m] <a) {
					l =m + 1;
				}
				else {
					u = m-1;
				}
			}
		}
	}
				
		
		
		
	
	// orderedlist
	
	/* int orderedinsert() {
		int a;
		int b =0;
		
		for(int i =0; i<10; i++)

		cout<<"Enter number a number to insert :"<<endl;
		cin>>a;
		
		for(int k =0; k<10; k++) {
			if(x[k] > a) {
				break;
			}
			
		for (int j=10; j>k; j--){
			x[j] = x[j-1];
			}
			x[k] = a;
			b++;
			
		if (b == 0) {
			cout<<"The number is not found"<<endl;
		}
			
			
			
		}
		return 0;
	 */

		
		
		
		
	// Linear search - Read all the data
	/// advantage -  ordered arrays and unordered array
	/// disadvantage- slow


	// Binary search - 
	/// only done to orderd arrays
	/// faster than a liner search

	
			
			
	


// Linear searcg = o(N)
// Binary search = O(log N)

		



};
int main() {
	Myarray arr1;
	arr1.insert();

	//arr1.serach();
	arr1.orderedinsert();
	//arr1.mydelete();
	arr1.display();
	//arr1.binarysearch();
	
	return 0;
}


