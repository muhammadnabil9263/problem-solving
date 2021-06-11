import javax.management.relation.Relation;

public class App {
    public static void main(String[] args) throws Exception {
        Relational r1 = new Relational();
        r1.setNumerator(1);
        r1.setDenominator(4);
        Relational r2 = new Relational();
        r2.setNumerator(1);
        r2.setDenominator(4);
        Relational result = new Relational();
        result = Relational.add(r1,r2);
        System.out.println(result.toString());
        r1.add(r2);
        System.out.println(result.toString());

    }
}
