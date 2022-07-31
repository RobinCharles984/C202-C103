import java.util.Scanner; //Scanner package

public class Exerc_GoRangers {
    public static void main(String[] args) {
        //Variables
        int year0 = 0;
        int year1 = 0;
        int year2 = 0;
        int enemies0 = 0;
        int enemies1 = 0;
        int enemies2 = 0;

        //Getting data
        Scanner getData = new Scanner(System.in);
        year0 = getData.nextInt();
        enemies0 = getData.nextInt();
        year1 = getData.nextInt();
        enemies1 = getData.nextInt();
        year2 = getData.nextInt();
        enemies2 = getData.nextInt();

        //Printing Data
        System.out.printf("Ano %d: %d inimigos derrotados. " +
                "Ano %d: %d inimigos derrotados. " +
                "Ano %d: %d inimigos derrotados.",
                year0, enemies0,
                year1, enemies1,
                year2, enemies2);

    }
}
