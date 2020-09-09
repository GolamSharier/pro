#include<stdio.h>
#include <stdlib.h>
int main()
{

    int n;
 system("cls");
    printf("                        Welcome to FOOD KING Restaurant management \n\n");
    printf("                           Here the popular Restaurant List\n");
    printf("                               1.MASTER CHEF\n");
    printf("                               2.Twist & Taste\n");
    printf("                               3.The Hideout Cafe\n");
    printf("                               4.Order's Up\n");
    printf("                               5.Hungry Heroes\n\n");

    printf("                   Which restaurant would you like to check sir/mam?\n\n");
    printf("                   Inter your checking number!\n\n");
    scanf("%d",&n);

    if (n==1)
        {
            printf("                            Welcome to MASTER CHEF\n\n");
            printf("                                  MENU CARD\n");
            printf("              Item Name                                     Price\n\n");
            printf("                                Fast Foods\n\n");
            printf("              1.Chirpy Chicken Burger......................=120 TK\n");
            printf("              2.Chili Chicken Pizza........................=160 TK\n");
            printf("              3.French Fry.................................=70 TK\n");
            printf("              4.Grilled Sandwich...........................=90 TK\n");
            printf("              5.Grilled Chicken.............................=400 TK\n\n");
            printf("                                 Packages\n\n");
            printf("              6.Cheese Burger + French Fry.................=130 TK\n");
            printf("              7.Fried Rice + Bar-B-Q Chicken + Salad.......=220 TK\n");
            printf("              8.Boiled Rice+Mutton+Smashed potato.........=330 TK\n");
            printf("              9.Boiled Rice+Fish+Pickle.....................=199 TK\n\n");
            printf("                              Coffee &  Shake\n\n");
            printf("             10.7 up.......................................=20 TK\n\n");

            printf("\t     Which food would you like to order sir/mam ?\n ");
            printf("\t     Enter the food number for order!\n\n");

            printf("\t     Enter zero for return to main menu \n");

            scanf("%d",&n);

            if(n==0)
            {
                main();
            }

//Start-1
            if(n==1){
                printf("            Chirpy Chicken Burger......................=120 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 120 Tk\n\n");
                }
                else {
                    printf("            thanks");
                }
            }
                if(n==2){
                printf("            Chili Chicken Pizza........................=160 TK\n");
                printf("            available right now. serve time 25 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 160 Tk\n\n");
                }
                else{
                    printf("            thanks");
                }
            }
                if(n==3){
                printf("            French Fry.................................=70 TK\n");
                printf("            available right now. serve time 20 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 70 Tk\n\n");
                }
                else{
                    printf("            thanks");
                }
            }
                if(n==4){
                printf("            Grilled Sandwich...........................=90 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 90 Tk\n\n");
                }
                else{
                    printf("           thanks");
                }
            }
                if(n==5){
                printf("            Grilled Chicken.............................=400 TK\n");
                printf("            available right now. serve time 40 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 400 Tk\n\n");
                }
                else{
                    printf("           thanks");
                }
            }
                if(n==6){
                printf("            Cheese Burger + French Fry.................=130 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 130 Tk\n\n");
                }
                else{
                    printf("           thanks");
                }
            }
                if(n==7){
                printf("            Fried Rice + Bar-B-Q Chicken + Salad.......=220 TK\n");
                printf("            available right now. serve time 40 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 220 Tk\n\n");
                }
                else{
                    printf("           thanks");
                }
            }
                if(n==8){
                printf("            Boiled Rice+Mutton+Smashed potato.........=330 TK\n");
                printf("            available right now. serve time 45 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 330 Tk\n\n");
                }
                else{
                    printf("           thanks");
                }
            }
                if(n==9){
                printf("            Boiled Rice+Fish+Pickle.....................=199 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 199 Tk\n\n");
                }
                else{
                    printf("           thanks");
                }
            }
                if(n==10){
                printf("            Milk-Chocolate Shake......................=100 TK\n");
                printf("            available right now. serve time 20 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 100 Tk\n\n");
                }
                else{
                    printf("           thanks");
                }
            }

        }
//END-1
//Start-2

     else if (n==2)
        {
            printf("                             Welcome TO Twist & Taste 02\n");
            printf("                                     MENU CARD\n");
            printf("                 Item Name                                     Price\n\n");
            printf("               1.Oven Baked Pasta..............................195\n");
            printf("               2.Pizza Rolla Sub...............................135\n");
            printf("               3.Tandoori Chowmein.............................230\n");
            printf("               4.Chicken Cheese Ball...........................140\n");
            printf("               5.Grilled Chicken Burger........................180\n");
            printf("               6.Flame Grilled Burger..........................160\n");
            printf("               7.Chicken Lollipop..............................135\n");
            printf("               8.Grilled Panini Sandwich.......................220\n");
            printf("               9.Pizza Sandwich................................215\n");
            printf("              10.Hydrabadi Biryani.............................130\n\n");
            printf("\t      Which food would you like to order sir/mam ?\n ");
            printf("\t      Enter the food number for order!\n\n");
            printf("\t     Enter zero for return to main menu \n");
            scanf("%d",&n);

            if(n==0)
            {
                main();
            }


            if(n==1){
                printf("            Oven Baked Pasta..............................195 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 195 Tk\n\n");
                }
                else{
                    printf("            thanks");
                }
            }
                if(n==2){
                printf("            Pizza Rolla Sub...............................135 Tk\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 135 Tk\n\n");
                }
                else{
                    printf("            thanks");
                }
            }
                if(n==3){
                printf("            Tandoori Chowmein.............................230 Tk\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 230 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==4){
                printf("            Chicken Cheese Ball...........................140 Tk\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 140 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==5){
                printf("            Grilled Chicken Burger........................180 Tk\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 180 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==6){
                printf("            Flame Grilled Burger..........................160 Tk\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 160 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==7){
                printf("            Chicken Lollipop..............................135 Tk\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 135 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==8){
                printf("            Grilled Panini Sandwich.......................220 Tk\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 220 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==9){
                printf("            Pizza Sandwich................................215 Tk\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 215 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==10){
                printf("            Wedges........................................75 Tk\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 75 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
        }
//End-2
//Start-3
     else if (n==3)
        {
            printf("                           Welcome To The Hide Out Cafe 03\n");
            printf("                                     MENU CARD\n");
            printf("                 Item Name                                     Price\n\n");
            printf("               1.Oreo Shake....................................140\n");
            printf("               2.Kitkat Shake..................................140\n");
            printf("               3.Chocolate Shake...............................150\n");
            printf("               4.Peanut Muffin.................................160\n");
            printf("               5.Strawberry Cream..............................180\n");
            printf("               6.Iced Lemon Tea................................110\n");
            printf("               7.Mint Chiller..................................90\n");
            printf("               8.Cold Coffee...................................100\n");
            printf("               9.Creamy Cold...................................160\n");
            printf("              10.Chocolate Coffee..............................150\n\n");
            printf("\t      Which food would you like to order sir/mam ?\n ");
            printf("\t      Enter the food number for order!\n\n");
            printf("\t     Enter zero for return to main manu \n");
            scanf("%d",&n);

            if(n==0)
            {
                main();
            }


            if(n==1){
                printf("            Oreo Shake....................................140 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 140 Tk\n\n");
                }
                else{
                    printf("            thanks");
                }
            }
                if(n==2){
                printf("            Kitkat Shake..................................140 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 140 Tk\n\n");
                }
                else{
                    printf("            thanks");
                }
            }
                if(n==3){
                printf("            Chocolate Shake...............................150 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 150 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==4){
                printf("            Peanut Muffin.................................160 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 160 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==5){
                printf("            Strawberry Cream..............................180 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 180 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==6){
                printf("            Iced Lemon Tea................................110 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 110 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==7){
                printf("            Mint Chiller..................................90 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 90 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==8){
                printf("            Cold Coffee...................................100 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 100 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==9){
                printf("            Creamy Cold...................................160 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 160 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==10){
                printf("            Chocolate Coffee..............................150 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 150 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
        }

//END-3
//Start-4
     else if (n==4)
        {
            printf("                                 Welcome To Order's Up 04\n");
            printf("                                     MENU CARD\n");
            printf("                 Item Name                                     Price\n\n");
            printf("               1.Cream Of Mushroom Soup........................160\n");
            printf("               2.Chunky Chicken Soup...........................100\n");
            printf("               3.Thai Soup.....................................110\n");
            printf("               4.Shrimp Soup...................................220\n");
            printf("               5.Spaghetti Bolognese...........................290\n");
            printf("               6.Creamy Penne Pasta............................270\n");
            printf("               7.Pasta Ollo....................................260\n");
            printf("               8.Garlic Butter mushroom Pasta..................290\n");
            printf("               9.Pepper Steak..................................780\n");
            printf("              10.BBQ Sparo Ribs................................599\n\n");
            printf("\t      Which food would you like to order sir/mam ?\n ");
            printf("\t      Enter the food number for order!\n\n");
            printf("\t     Enter zero for return to main manu \n");
            scanf("%d",&n);

            if(n==0)
            {
                main();
            }


            if(n==1){
                printf("            Cream Of Mushroom Soup........................160 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 160 Tk\n\n");
                }
                else{
                    printf("            thanks");
                }
            }
                if(n==2){
                printf("            Chunky Chicken Soup...........................100 Tk\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 100 Tk\n\n");
                }
                else{
                    printf("            thanks");
                }
            }
                if(n==3){
                printf("            Thai Soup.....................................110 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 110 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==4){
                printf("            Shrimp Soup...................................220 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 220 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==5){
                printf("            Spaghetti Bolognese...........................290 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 290 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==6){
                printf("            Creamy Penne Pasta............................270 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 270 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==7){
                printf("            Pasta Ollo....................................260 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 260 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==8){
                printf("            Garlic Butter mushroom Pasta..................290 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 290 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==9){
                printf("            Pepper Steak..................................780 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 780 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==10){
                printf("            BBQ Sparo Ribs................................599 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 599 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
        }

     else if (n==5)
        {
            printf("                             Welcome To Hungry Heroes 05\n");
            printf("                                     MENU CARD\n");
            printf("                 Item Name                                     Price\n\n");
            printf("               1.Steamed Momo..................................170\n");
            printf("               2.Fried Momo....................................170\n");
            printf("               3.Soup Momo.....................................180\n");
            printf("               4.Wedges........................................70\n");
            printf("               5.French Fries..................................100\n");
            printf("               6.BBQ Chicken Wings.............................130\n");
            printf("               7.Shake.........................................105\n");
            printf("               8.Crusher.......................................105\n");
            printf("               9.Beef Patty....................................90\n");
            printf("              10.Alapino.......................................200\n\n");
            printf("\t      Which food would you like to order sir/mam ?\n ");
            printf("\t      Enter the food number for order!\n\n");
            printf("\t     Enter zero for return to main manu \n");
            scanf("%d",&n);

            if(n==0)
            {
                main();
            }


            if(n==1){
                printf("            Steamed Momo..................................170 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 170 Tk\n\n");
                }
                else{
                    printf("            thanks");
                }
            }
                if(n==2){
                printf("            Fried Momo....................................170 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 170 Tk\n\n");
                }
                else{
                    printf("            thanks");
                }
            }
                if(n==3){
                printf("            Soup Momo.....................................180 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 180 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==4){
                printf("            Wedges........................................70 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 70 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==5){
                printf("            French Fries..................................100 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 100 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==6){
                printf("            BBQ Chicken Wings.............................130 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 130 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==7){
                printf("            Shake.........................................105 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 105 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==8){
                printf("            Crusher.......................................105 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 105 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==9){
                printf("            Beef Patty....................................90 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 90 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
                if(n==10){
                printf("            Alapino.......................................200 TK\n");
                printf("            available right now. serve time 30 minutes.do you want to order this?\n");
                printf("            YES=1 & NO=2\n");
                scanf("%d",&n);
                if(n==1){
                    printf("            Order Confirmed , your bill is = 200 Tk\n\n");
                }
                else{
                    printf("             thanks");
                }
            }
        }

return 0;
}


