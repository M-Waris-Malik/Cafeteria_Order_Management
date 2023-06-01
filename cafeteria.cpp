#include <iostream>
#include <vector>
using namespace std;
class Menu{
	private:
		string item;
		int price, itemNo;
	public:
		Menu(int ItemNo, string Item, int Price){
			itemNo= ItemNo;
			item =Item;
			price=Price;
		}
	string getItem(){
		return item;
	}
	int getItemNo(){
		return itemNo;
	}
	int getPrice(){
		return price;
	}
};
class Cafe{
	private:
		vector<Menu> ve;
	public:
		add(int ItemNo, string Item, int Price){
			Menu menu(ItemNo, Item, Price);
			ve.push_back(menu);
		}
	order(){
		for(int i=0; i<ve.size(); i++){
cout<<ve[i].getItemNo()<<". "<<ve[i].getItem()<<": "<<ve[i].getPrice()<<endl;
		}
		int ord, quant;
cout<<"Enter item No for order: "; cin>>ord;
cout<<"Enter quantity of item: "; cin>>quant;
	for(int i=0; i<ve.size(); i++){
		if(ord==ve[i].getItemNo()){
	int total = quant * ve[i].getPrice();
	cout<<"Total bill: "<<total<<endl<<endl;
		}
	}
	}
};
int main(){
	Cafe cafe;
	cafe.add(1,"Chicken Burger",150);
	cafe.add(2,"Zinger Burger",250);
	cafe.add(3,"Potato Chips",50);
	cafe.add(4,"Juice",100);
	cout<<"<<<<< Cafeteria Menu >>>>>"<<endl<<endl;
	cafe.order();
}
