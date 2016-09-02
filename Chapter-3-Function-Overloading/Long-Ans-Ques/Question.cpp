Q. Given below are incomplete definition of two classes
 write a complete C++ program that lets you sell,purchase 
 or order a specific item or items.
 class Item{
 	int itemno;
 	char description[21];
 	float price;
 	int QOH,ROL, ROQ;//Quantity on Head , Reorder Level, Reorder-Quantity.
  public:
  	//Overloaded constructor definitions
  	void puchase (int n)
  	{
  		://adds n to QOH
	}
	void sale(int n)
	{
		://Subtracting n from QOH
	}
	void display(void)
	{
		//display item details
	}
 };
 class store{
 	Item itemlist[50];
 					//List of 50 items
  public:
  	//Constructors
  	neew()
  	{
  		//To add new item into itemlist
	}
	deelete()
	{
		//To delete an item form itemlist
	}
	order(itemno,qty)
	{
		//To order qty pieces of itemno
	}
	order(itemno)
	{
		//To order set ROQ pieces for itemno
	}
	order()
	{
		//Check which items' QOH is below their ROL, then 
		//order for ROQ pieces for all those itemnos
	}
	bill()
	{
		//Ask itemno, qtysold and prepare the bill.
		//Also update Item's information by calling purchase() of Item.
	}
 };
 Using above information, write a complete C++
 program that lets you sell, purchase or order a 
 specific item or itmems.
