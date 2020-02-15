
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soyam,sopur,sbdg,nasput,tmp,thu,naspecel,basurat,bascin;
    int menu,uang,kembalian,total=0,jmlh,jmlhsluruh;
    int jensot,jenbas;

    menu:
    printf(" ===== Warung Terserah =====\n");
    printf("Menu :");
    printf("\n1. Soto");
    printf("\n2. Baso");
    printf("\n3. Nasi Putih");
    printf("\n4. Tempe");
    printf("\n5. Tahu");
    printf("\n6. Nasi Pecel");
    printf("\n99.Keluar");
    printf("\n11.Struck Pembayaran");
    printf("\n\nMasukan Menu: ");
    scanf("%d",&menu);
    system("cls");


    switch (menu){
    case 1: printf("MENU SOTO\n");
        printf("1. soto ayam\n");
        printf("2. soto campur\n");
        printf("3. soto bandung\n");
        printf("Pilih Jenis Soto (1/2/3): ");
        scanf("%d",&jensot);
            if(jensot==1){
                printf("\nJumlah Pesanan : ");
                scanf("%d",&jmlh);
                soyam=15000;
                total=total+(jmlh*soyam);
                system("cls");}
            else if(jensot==2){
                printf("\nJumlah Pesanan : ");
                scanf("%d",&jmlh);
                sopur=16000;
                total=total+(jmlh*sopur);
                system("cls");}
            else if(jensot==3){
                printf("\nJumlah Pesanan : ");
                scanf("%d",&jmlh);
                sbdg=18000;
                total=total+(jmlh*sbdg);
                system("cls");}
        goto menu;
    break;

    case 2: printf("MENU BASO\n");
        printf("1. Baso urat \n");
        printf("2. Baso cincang \n");
        printf("pilih Baso (1/2): ");
        scanf("%d",&jenbas);
            if(jenbas==1){
                printf("\nJumlah Pesanan : ");
                scanf("%d",&jmlh);
                basurat=6000;
                total=total+(jmlh*basurat);
                system("cls");}
            else if(jenbas==2){
                printf("\nJumlah Pesanan : ");
                scanf("%d",&jmlh);
                bascin=10000;
                total=total+(jmlh*bascin);
                system("cls");}
        goto menu;
    break;

    case 3: printf("MENU NASI\n");
        printf("nasi putih seharga Rp.4000\n");
        printf("Jumlah Pesanan : ");
        scanf("%d",&jmlh);
        nasput=4000;
        total=total+(jmlh*nasput);
        system("cls");
    goto menu;
    break;

    case 4: printf("MENU TEMPE\n");
        printf("tempe harga rp.1000\n");
        printf("Jumlah Pesanan : ");
        scanf("%d",&jmlh);
        tmp=1000;
        total=total+(jmlh*tmp);
        system("cls");
    goto menu;
    break;

    case 5: printf("MENU TAHU\n");
        printf("tahu harga Rp.1000\n");
        printf("Jumlah Pesanan : "); scanf("%d",&jmlh);
        thu=1000;
        total=total+(jmlh*thu);
        system("cls");
    goto menu;
    break;

    case 6: printf("MENU PECEL\n");
        printf("nasi pecel harga rp.12000\n");
        printf("Jumlah Pesanan : "); scanf("%d",&jmlh);
        naspecel=12000;
        total=total+(jmlh*naspecel);
        system("cls");
    goto menu;
    break;

    case 11: printf("TOTAL PEMBAYARAN\n");
        printf("Total pembayaran: %d",total);
            if(total>50000){
                jmlhsluruh=total*0.9;
                printf("\n Harga setelah diskon: %d\n",jmlhsluruh);
                printf("Uang : ");
                scanf("%d",&uang);
                kembalian=uang-jmlhsluruh;
                printf("\nkembaliannya : %d\n",kembalian);
                }
            else {
                printf("\nUang : ");
                scanf("%d",&uang);
                kembalian=uang-total;
                printf("\nkembaliannya : %d\n",kembalian);
                }
    break;

    case 99:exit(0);
    default : printf("Pilihan tidak ada \n");
    }

    return 0;
}


/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soyam,sopur,sbdg,nasput,tmp,thu,naspecel,basurat,bascin;
    int menu,uang,kembalian,total=0,jmlh,jmlhsluruh;
    int jensot,jenbas;

    menu:
    printf(" ===== Warung Terserah =====\n");
    printf("Menu :");
    printf("\n1. Soto");
    printf("\n2. Baso");
    printf("\n3. Nasi Putih");
    printf("\n4. Tempe");
    printf("\n5. Tahu");
    printf("\n6. Nasi Pecel");
    printf("\n99.Keluar");
    printf("\n11.Struck Pembayaran");
    printf("\n Masukan Menu :");
    scanf("%d",&menu);
    system("cls");


    switch (menu){
    case 1: printf("MENU SOTO\n");
        printf("1. soto ayam\n");
        printf("2. soto campur\n");
        printf("3. soto bandung\n");
        printf("Pilih Jenis Soto (1/2/3): \n");
        scanf("%d",&jensot);
            if(jensot==1){
                printf("Jumlah Pesanan : ");
                scanf("%d",&jmlh);
                soyam=15000;
                total=total+(jmlh*soyam);}
            else if(jensot==2){
                printf("Jumlah Pesanan : ");
                scanf("%d",&jmlh);
                sopur=16000;
                total=total+(jmlh*sopur);}
            else if(jensot==3){
                printf("Jumlah Pesanan : ");
                scanf("%d",&jmlh);
                sbdg=18000;
            total=total+(jmlh*sbdg);}
        goto menu;
    break;

    case 2:
        printf("1. Baso urat \n");
        printf("2. Baso cincang \n");
        printf("pilih Baso (1/2): \n");
        scanf("%d",&jenbas);
            if(jenbas==1){
                printf("Jumlah Pesanan : ");
                scanf("%d",&jmlh);
                basurat=6000;
                total=total+(jmlh*basurat);}
            else if(jenbas==2){
                printf("Jumlah Pesanan : ");
                scanf("%d",&jmlh);
                bascin=10000;
                total=total+(jmlh*bascin);}
        goto menu;
    break;

    case 3:
        printf("nasi putih seharga Rp.4000\n");
        printf("Jumlah Pesanan : ");
        scanf("%d",&jmlh);
        nasput=4000;
        total=total+(jmlh*nasput);
    goto menu;
    break;

    case 4:
        printf("tempe harga rp.1000\n");
        printf("Jumlah Pesanan : ");
        scanf("%d",&jmlh);
        tmp=1000;
        total=total+(jmlh*tmp);
    goto menu;
    break;

    case 5:
        printf("tahu harga Rp.1000\n");
        printf("Jumlah Pesanan : "); scanf("%d",&jmlh);
        thu=1000;
        total=total+(jmlh*thu);
    goto menu;
    break;

    case 6:
        printf("nasi pecel harga rp.12000\n");
        printf("Jumlah Pesanan : "); scanf("%d",&jmlh);
        naspecel=12000;
        total=total+(jmlh*naspecel);
    goto menu;
    break;

    case 11:
        printf("Total pembayaran: %d",total);
            if(total>50000){
                jmlhsluruh=total*0.9;
                printf("\n Harga setelah diskon: %d\n",jmlhsluruh);
                printf("Uang : ");
                scanf("%d",&uang);
                kembalian=uang-jmlhsluruh;
                printf("\nkembaliannya : %d\n",kembalian);}
            else {
                printf("\nUang : \n");scanf("%d",&uang);
                kembalian=uang-total;
                printf("kembaliannya : %d\n",kembalian);}
    break;

    case 99:exit(0);
    default : printf("Pilihan tidak ada \n");
    }

    return 0;
}
*/
