class Demo {
int a;
int b;
public int sum() {
return a + b;
}
}
class Sum1{
public static void main(String[] args) {
Demo d = new Demo();
d.a = 10;
d.b = 20;
System.out.println(d.sum());
}
}
