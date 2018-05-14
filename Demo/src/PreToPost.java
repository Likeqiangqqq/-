import java.util.Scanner;
class TreeNode {
    public TreeNode left;
    public TreeNode right;
    public String val;
    public TreeNode(String val) {
        this.val = val;
    }
}

public class PreToPost {
    //后序遍历
    private static void scan(TreeNode tn){
        if(tn.left!=null) scan(tn.left);
        if(tn.right!=null) scan(tn.right);
        System.out.print(tn.val+",");
    }
     //还原二叉树
    private static TreeNode buildTree(String[]pres){
        TreeNode head = new TreeNode(pres[0]);
        TreeNode tmp = head;
        int len = pres.length;
        int flag = len-1;
        for (int i = 1,j=1; j < len/2+1; j++,i++) {
            //如果字符为操作符
            if ((pres[i].compareTo("a")<0||pres[i].compareTo("z")>0)                        ) {
                tmp.left = new TreeNode(pres[i]);
                tmp.right = new TreeNode(pres[flag--]);
                tmp = tmp.left;
            }else{
                tmp.left = new TreeNode(pres[i]);
                tmp.right = new TreeNode(pres[++i]);
                tmp = tmp.right;
            }
        }
        return head;
    }
    public static void main(String[] args) {
        @SuppressWarnings("resource")
		Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            String[] pres = sc.nextLine().split(",");
            TreeNode head = buildTree(pres);
            scan(head);
        }
    }
}
