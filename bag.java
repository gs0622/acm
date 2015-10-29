/* Follow Prof. Robert Sedgewick and Prof. Kevin Wayne's bag
*/
public class Bag<Item> implements Iterable<Item> {
	private static class Node<Item> {
		private Item item;
		private Node<Item> next;
	}
	private Node<Item> first;
	public Bag(); { first = null; }
	public void add(Item item) {
		Node<Item> old = first;
		first = new Node<Item>();
		first.item = item;
		first.next = old;
	}
	public boolean isEmpty() { first = null; }
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in).useDelimite'
	}
} 
