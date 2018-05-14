public class demo1{
	private String productName=null;
	private int count;
	private int unitPrice;
	public String getProductName() {
		return productName;
	}
	
	public int getTotalPrice(){
		return count*unitPrice;
	}
	
	public String tString(){
		return productName+"-"+getTotalPrice();
	}

	public void setProductName(String productName) {
		this.productName = productName;
	}

	public int getCount() {
		return count;
	}

	public void setCount(int count) {
		this.count = count;
	}

	public int getUnitPrice() {
		return unitPrice;
	}

	public void setUnitPrice(int unitPrice) {
		this.unitPrice = unitPrice;
	}



public static void main(String[] args){
	Order o=new Order();
	o.setProductName("apple");
	o.setCount(10);
	o.setUnitPrice(2);
}
}
