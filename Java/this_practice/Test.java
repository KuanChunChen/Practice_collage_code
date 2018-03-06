Public class Test {
	
	
	
	Public static void main (String [] args){ 

	double total_sale = 0.0;
	Fruit [] basket = {new Cherry(200),new Pineapple(50), new Orange (15),new Papaya(10)};
	int quanntity [] ={2,2,5,0};


	for (int  i =0 ; i< basket.length ;i++){
		total_sale += basket [i].calc(quantity[i]);
		}
		
		System.out.println(total_sale);
}


}