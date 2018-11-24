#include <stdio.h>
#include <stdlib.h>


	char secim;
	char hcik;
	char cevap[100];
	char sorutekrar,sorutekrar1,kadi[100],sifre[100],gecicisifre[100];
	char gecicikadi[100],gecicikadi2[100];
    int ik,b=0,mn,kale=0;
  
	int x=0,y=0,k,i=0,c=1,j,sayi,puan=0,kont=1,sorutekrarkontrol,uyekontrol,satirsayan=0;
	int l=1,kl=0;
	int n[18];
	FILE *oyungiris;



void esitlikatayici()
{
	n[0]=(x==0 && y==0);
	n[1]=(x==2 && y==0);
	n[2]=(x==4 && y==1);
	n[3]=(x==3 && y==-1); 
	n[4]=(x==-2 && y==0);
	n[5]=(x==-2 && y==4);
	n[6]=(x==1 && y==4);
	n[7]=(x==3 && y==3);
	n[8]=(x==4 && y==4);
	n[9]=(x==5 && y==4);
	n[10]=(x==5 && y==5);
	n[11]=(x==5 && y==2);
	n[12]=(x==5 && y==0);
	n[13]=(x==5 && y==-2);
	n[14]=(x==0 && y==-2);
	n[15]=(x==-1 && y==-1);
	n[16]=(x==2 && y==-6);
	n[17]=(x==2 && y==5);
	n[18]=(x==4 && y==6);
}
void sorular()
{
		srand(time(NULL));
		sayi=rand()%4;
		if(x==0 && y==0)       
		{
				printf("E.E.E sorusu\n\n");
				
				switch(sayi)
				{
						case 0: 
						{		
							printf("direncin simgesi nedir?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"r"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 1: 
						{
							printf("who is the boss?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"feyza hoca"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 2:
							{
								printf("Diktador kimdir?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"omer"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
							}
							
							case 3: 
						{
							printf("Bolum ogrencileri tarafindan esir alinan bolge?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"kutuphane"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
							
				}
		}
		
		
	else if(x==2 && y==0)  
	{
				printf("Yildiz Amfi sorulari\n\n");
				
				switch(sayi)
				{
						case 0: 
						{		
							printf("En guzel amfi?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"yildiz amfi"))
							  {
								printf("Aferin.Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 1: 
						{
							printf("Ýsmim Ne?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"yildiz amfi"))
							  {
								printf("Gelisme var\nDogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 2:
							{
								printf("Benim kac dersligim var?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"12"))
							  {
								printf("Teker teker saydin mi ya?Ne kadar issizsin.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
							}
							
							case 3: 
						{
							printf("Kac girisim var benim?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"2"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
							
				}
		}
	
	
	else if(x==4 && y==1)   
	{
				printf("Matematik Bolumunun Sorulari\n\n");
				
				switch(sayi)
				{
						case 0: 
						{		
							printf("log10 kactir?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"1"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 1: 
						{
							printf("Matematige cok sovdun mu?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"feyza hoca"))
							  {
								printf("Bende seni...\nOyundayiz mecbur puan vericem.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yalanci\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 2:
							{
								printf("* isareti benim dilimde ne is yapar?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"carpma"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
							}
							
							case 3: 
						{
							printf("Pisagorun karisi kimdir?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"hipotenus"))
							  {
								printf("Pisagor:Karimi ne aniyonuzlan..\nMakine:Sakin ol pisagor bunlar boyle\n");
								printf("Ahireti var bunun..\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
							
				}
		}
	
	else if(x==3 && y==-1)  
		{
		
			printf("Kimya Bolumunun Sorulari\n\n");
				
				switch(sayi)
				{
						case 0: 
						{		
							printf("Kimyanin Eski Adi?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"Simya"))
							  {
								printf("Ey gidi gunler ey\nDogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 1: 
						{
							printf("ph i bulmak icin hangi matematiksel islemi kullaniriz?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"log"))
							  {
								printf("Dogru cevap\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yalanci\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 2:
							{
								printf("kimyanin ingilizcesi nedir?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"chemical"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
							}
							
							case 3: 
						{
							printf("Kimyaci oldun mu ne oluyon?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"kimyager"))
							  {
								printf("Pisagor:Karimi ne aniyonuzlan..\nMakine:Sakin ol pisagor bunlar boyle\n");
								printf("Ahireti var bunun..\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
							
				}
				
		}
	
	else if(x==-2 && y==0)  
	{
	
			printf("City nin sorulari\n\n");
				
				switch(sayi)
				{
						case 0: 
						{		
							printf("bir cay kac lira?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"1"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 1: 
						{
							printf("City nin turkcesi?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"sehir"))
							  {
								printf("Dogru cevap\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 2:
							{
								printf("Bende cag kebap var mi\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"yok"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Cag kebabi nere gordun he gireyim o gozlere..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
							}
							
							case 3: 
						{
							printf("Arkamda hangi bolum var?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"fizik muhendisligi"))
							  {
								printf("Dogru cevap.\n");
								printf("5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
							
				}
				
	}
	else if(x==-2 && y==4)  
	
	{ printf("Kamu Hukuku Bolumunun Oadesiniz\n");	
	
		
				
				switch(sayi)
				{
						case 0: 
						{		
							printf("direncin simgesi nedir?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"r"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 1: 
						{
							printf("who is the boss?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"feyza hoca"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 2:
							{
								printf("Diktador kimdir?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"omer"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
							}
							
							case 3: 
						{
							printf("Bolum ogrencileri tarafindan esir alinan bolge?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"kutuphane"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
							
				}
		}
	else if(x==1 && y==4)  
		{
				printf("Kutuphane Sorusu\n\n");
				
				switch(sayi)
				{
						case 0: 
						{		
							printf("Diktator Sairimiz kimdir?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"omer"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 1: 
						{
							printf("Beni en cok kullanan bolum\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"eee"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 2:
							{
								printf("Diktador kimdir?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"omer"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
							}
							
							case 3: 
						{
							printf("Koltuklarim cok mu rahat :P ?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"evet"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
							
				}
		}
	else if(x==3 && y==3)  
		{
				printf("Hidroloji sorulari\n\n");
				
				switch(sayi)
				{
						case 0: 
						{		
							printf("Hidro Turkcesi?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"su"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 1: 
						{
							printf("who is the boss?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"feyza hoca"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 2:
							{
								printf("Diktador kimdir?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"omer"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
							}
							
							case 3: 
						{
							printf("a ya basarsan 5 puan veririm :) \n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"a"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
							
				}
		}
	else if(x==4 && y==4)   
		{
				printf("Jeoloji Bolumu sorusu\n\n");
				
				switch(sayi)
				{
						case 0: 
						{		
							printf("Jeo ne demektir?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"r"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 1: 
						{
							printf("Jeoloji bitirene ne denir?"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"jeolog"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 2:
							{
								printf("Unlu bir jeolog\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"celal sengor"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
							}
							
							case 3: 
						{
							printf("Kolumuzdaki bilekler guzel mi :P ?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"evet"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
							
				}
		}
	else if(x==5 && y==4)   
		{
				printf("Cevre Muhendisligi sorusu\n\n");
				
				switch(sayi)
				{
						case 0: 
						{		
							printf("what is 'cevre' in enlish?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"environmental"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 1: 
						{
							printf("who is the boss?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"feyza hoca"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 2:
							{
								printf("Diktador kimdir?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"omer"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
							}
							
							case 3: 
						{
							printf("Bolumde yapay gol bulunan yerin adi?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"yesil vadi"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
							
				}
		}
	else if(x==5 && y==5)  
	{
	 
				printf("Maden muhendisligi bolumu sorusu\n\n");
				
				switch(sayi)
				{
						case 0: 
						{		
							printf("what is 'maden' in english?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"mine"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 1: 
						{
							printf("who is the boss?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"feyza hoca"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 2:
							{
								printf("Bilekliklerimiz guzel mi\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"evet"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
							}
							
							case 3: 
						{
							printf("Ýsmi maden ile ozdeslesmis ilimiz?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"zonguldak"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
							
				}
		}
	else if(x==5 && y==2)   
		{
				printf("Aktuerya Bolumu sorusu\n\n");
				
				switch(sayi)
				{
						case 0: 
						{		
							printf("what is 'akturya' in english?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"aktuar"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 1: 
						{
							printf("who is the boss?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"feyza hoca"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 2:
							{
								printf("Aktuerya ne yapar bilmiyon dimi?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"evet"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yalanci..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
							}
							
							case 3: 
						{
							printf("Turkiyede resmi olarak hangi yil baslar aktuerya isi?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"2008"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
							
				}
		}
	else if(x==5 && y==0)   
		{
				printf("Ýstatistik bolumu sorusu\n\n");
				
				switch(sayi)
				{
						case 0: 
						{		
							printf("what is 'Ýstatistik' in english?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"statistic"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 1: 
						{
							printf("who is the boss?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"feyza hoca"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 2:
							{
								printf("Diktador kimdir?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"omer"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
							}
							
							case 3: 
						{
							printf("ya yoruldummm 5 e bassana bi :D \n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"5"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
							
				}
		}
	else if(x==5 && y==-2)  
		{
				printf("Kimya Muhendisligi Bolumunun sorusu\n\n");
				
				switch(sayi)
				{
						case 0: 
						{		
							printf("Hacettepede kimya bolumu var mi?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"evet"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 1: 
						{
							printf("who is the boss?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"feyza hoca"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 2:
							{
								printf("kimya mi ben mi?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"sen"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
							}
							
							case 3: 
						{
							printf("61 e basar misin :) ?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"61"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
							
				}
		}
	else if(x==0 && y==-2)  
		{
				printf("Nukleer Muhendisligi Bolumu sorusu\n\n");
				
				switch(sayi)
				{
						case 0: 
						{		
							printf("Nukleer calismalari icin acilan kurum?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"taek"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 1: 
						{
							printf("who is the boss?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"feyza hoca"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 2:
							{
								printf("Turkiyede yapimi suren ilk olacak nukleer santralin ismi?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"akkuyu"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
							}
							
							case 3: 
						{
							printf("Dunyada Radyasyonsuz bolge var midir?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"yoktur"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
							
				}
		}
	else if(x==-1 && y==-1) 
		{
				printf("Fizik muhendisligi Bolumu sorusu\n\n");
				
				switch(sayi)
				{
						case 0: 
						{		
							printf("direncin simgesi nedir?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"r"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 1: 
						{
							printf("who is the boss?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"feyza hoca"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 2:
							{
								printf("Diktador kimdir?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"omer"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
							}
							
							case 3: 
						{
							printf("cikista sol tarafinda kalan yerin ismi?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"city"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
							
				}
		}
	else if(x==2 && y==-6)  
		{
				printf("Seramik Bolumunun sorusu\n\n");
				
				switch(sayi)
				{
						case 0: 
						{		
							printf("Ýlk seramik nerede uretildi?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"anadolu"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 1: 
						{
							printf("Ham maddem?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"toprak"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 2:
							{
								printf("Ýlk yapilisim m.o kac yilina dayanir?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"6000"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
							}
							
							case 3: 
						{
							printf("seramik yazar misin?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"seramik"))
							  {
								printf("boyle uslu ol puan veriyim\nDogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
							
				}
		}
	else if(x==2 && y==5)  
		{
				printf("Biyoloji Bolumunun sorusu\n\n");
				
				switch(sayi)
				{
						case 0: 
						{		
							printf("Ýsmimin kokeni hangi dildir?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"yunanca"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 1: 
						{
							printf("what is 'biyoloji ' in english?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"biology"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 2:
							{
								printf("Deri bir organ midir?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"evet"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
							}
							
							case 3: 
						{
							printf("Hiyar sebze midir meyve midir?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"meyve"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
							
				}
		}
	else if(x==4 && y==6)   
		{
				printf("Bilgisayar Bolumu sorusu\n\n");
				
				switch(sayi)
				{
						case 0: 
						{		
							printf("Pc ne demektir?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"Bilgisayar"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 1: 
						{
							printf("who is the boss?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"feyza hoca"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
						
						case 2:
							{
								printf("Benim yazildigim program dili?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"c"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
							}
							
							case 3: 
						{
							printf("What is 'bilgisayar ' in english?\n\n"); 
							gets(cevap);
							//	fflush(stdin);
							// char cevap1="ahmet";
							if(!strcmp(cevap,"computer"))
							  {
								printf("Dogru cevap.\n5 puan kazandiniz.\n");
								puan+=5;
								printf("Puaniniz : %d\nCozmeye devam etmek icin r ye basin\nOdadan cikmak icin k ye basin\n",puan);
								scanf("%c",&sorutekrar);
								fflush(stdin);
								if(sorutekrar=='r')
								{
									sorutekrarkontrol=4;
								}
								else if(sorutekrar=='k')
								{
									sorutekrarkontrol=8;
								}
								else
								{
									printf("nerede buldun %c yi.\nAttim seni",sorutekrar);
									sorutekrarkontrol=8;
								}
							  }
							else
							  {
								printf("Yanlis cevap dostum..\nAtildin\n\n");
								puan=puan-3; 
							  }
						                                 break;
						}
							
				}
		}
	else                    {printf("Girilebilecek yer bulunamadi. \n"); }	
		}		

void konumlar()
{
	printf("Suan ki konumunuz x=%d y=%d dir.\n",x,y);
	if(x==0 && y==0)        {printf("E.E.E Bolumunun Onundesiniz");	}
	else if(x==2 && y==0)   {printf("Yildiz Amfinin Onundesiniz\n");	}
	else if(x==4 && y==1)   {printf("Matematik Bolumunun Onundesiniz\n");	}
	else if(x==3 && y==-1)  {printf("Kimya Bolumunun Onundesiniz\n");	}
	else if(x==-2 && y==0)  {printf("City nin Onundesiniz\n");	}
	else if(x==-2 && y==4)  {printf("Kamu Hukuku Bolumunun Onundesiniz\n");	}
	else if(x==1 && y==4)   {printf("Kutuphanenin Onundesiniz\n");	}
	else if(x==3 && y==3)   {printf("Hidroloji Bolumunun Onundesiniz\n");	}
	else if(x==4 && y==4)   {printf("Jeoloji Bolumunun Onundesiniz\n");	}
	else if(x==5 && y==4)   {printf("Cevre Muhendisligi Bolumunun Onundesiniz\n");	}
	else if(x==5 && y==5)   {printf("Maden Muhendisligi Bolumunun Onundesiniz\n");	}
	else if(x==5 && y==2)   {printf("Aktuerya Bolumunun Onundesiniz\n");	}
	else if(x==5 && y==0)   {printf("Ýstatistik Bolumunun Onundesiniz\n");	}
	else if(x==5 && y==-2)  {printf("Kimya Muhendisligi Bolumunun Onundesiniz\n");	}
	else if(x==0 && y==-2)  {printf("Nukleer Muhendisligi Bolumunun Onundesiniz\n");	}
	else if(x==-1 && y==-1) {printf("Fizik Muhendisligi Bolumunun Onundesiniz\n");	}
	else if(x==2 && y==-6)  {printf("Seramik Bolumunun Onundesiniz\n");	}
	else if(x==2 && y==5)   {printf("Biyoloji Bolumunun Onundesiniz\n");	}
	else if(x==4 && y==6)   {printf("Bilgisayar Muhendisligi Bolumunun Onundesiniz\n");	}
	else                    {printf("Hic bi bolumun onunde degilsiniz:( \n"); }
}
  

int main()
{
	kadi[100]='a';
	sifre[10]='m';
	puan=1234;
  oyungiris =fopen("D:\\ahmet.txt","a+");
fprintf(oyungiris,"a a %d\n",puan);
  fclose(oyungiris);

 
 printf("HaciBey oyununa hos geldiniz\n\n");
 basa : printf("Uye iseniz 1'e\nYeni uye olmak icin 2'e basiniz\n");
 scanf("%d",&uyekontrol);
 fflush(stdin);
system("cls");
 
	 if(uyekontrol==1)
	{
	 	kont=0;
	 	 
 		
		 
		
 suraya:	    printf("Kullanici Adi:\n"); scanf("%s",&kadi);
 		strcpy(gecicikadi,kadi);
 		strcpy(gecicikadi2,kadi);
 
 oyungiris =fopen("D:\\ahmet.txt","r");
 	for(j=0;j<=1000;j++)
 		{
	 			while(!feof(oyungiris))
		    	{
			    fscanf(oyungiris,"%s%s%d",kadi,sifre,&puan);
			    satirsayan=satirsayan+1;
		    	}
		}
		fclose(oyungiris);
		
		
		
 	oyungiris =fopen("D:\\ahmet.txt","r");
 		for(i=0;i<=satirsayan-1;i++)
 		{
 			fscanf(oyungiris,"%s%s%d",kadi,sifre,&puan);
 		    
			if(!strcmp(gecicikadi2,kadi))
	 		{
	 			ik=i;
	 			i=satirsayan+1;
	 			
			}
			
			else
			{
				
				if(i==satirsayan-1)
				{
				printf("ops..\nkayitli kullanici bulunamadi\n"); 
				goto suraya;
				}
				
			}
			
		}  
		  
	fclose(oyungiris);
		
		oyungiris =fopen("D:\\ahmet.txt","r");

				for(i=0;i<=satirsayan-1;i++)
 		{
 			fscanf(oyungiris,"%s%s%d",kadi,sifre,&puan);
 		    
			if(!strcmp(gecicikadi,kadi))
	 		{
				b=b+1;
				mn=b;	
			}
      	}
      	fclose(oyungiris);
      
	  	b=0;
		
		oyungiris =fopen("D:\\ahmet.txt","r");
      	
     	while(mn!=b)
 		{
 			fscanf(oyungiris,"%s%s%d",kadi,sifre,&puan);
 		    kl++;
			if(!strcmp(gecicikadi,kadi))
	 		{
	 			b++;
			}
		
		}
			fclose(oyungiris);   
		
buraya:		printf("Sifre:\n");  scanf("%s",&sifre);
		
	 	strcpy(gecicisifre,sifre);
	 	
		oyungiris =fopen("D:\\ahmet.txt","r");
		
		for(i=1;i<=kl;i++)
		{
				fscanf(oyungiris,"%s%s%d",kadi,sifre,&puan);
		}
		

	 
	 	
		
		
		if(!strcmp(gecicisifre,sifre))
		{
			printf("giris basarili\n");
		}
		else
		{
			system("cls");
			printf("ops...Hatali Sifre\n"); 
			goto buraya;
		}
		
		oyungiris =fopen("D:\\ahmet.txt","a");
		for(i=0;i<=ik;i++)
		{
				fscanf(oyungiris,"%s%s%d",kadi,sifre,&puan);
		}
		
	}
	 
	 else if(uyekontrol==2)
	 {
zipla:	 	printf("kullanici adi:\n"); scanf("%s",kadi); 			 
	 	strcpy(gecicikadi,kadi);
	 	
	 	oyungiris =fopen("D:\\ahmet.txt","r");
 		for(j=0;j<=1000;j++)
 		{
	 			fscanf(oyungiris,"%s%s%d",kadi,sifre,&puan);
				 if(!strcmp(gecicikadi,kadi))
	 			{
					printf("Bu kullanici adi ile uye mevcut lutfen baska bir k.adi ile uye olun\n");	
	 				goto zipla;
				}
				else
				{
					
				}
		}
		fclose(oyungiris);
		
		strcpy(kadi,gecicikadi);
		puan=0;
	

		printf("sifre:\n");         scanf("%s",sifre);           fflush(stdin);
		
		oyungiris=fopen("D:\\ahmet.txt","a");
		
		kont=0;
	 }
	 else
	 {
	 printf("Neden ha ?\n"); goto basa;	
	 }
	 
	printf("Merhaba %s!\n\nHazirsan Baslayalim..      mevcut puaniniz:%d\n",kadi,puan);
	while(1)
	{
	esitlikatayici();
	konumlar();
	for(i=0;i<=18;i++)
		{
			if(n[i]==1)
			{
			printf("\n\nÝceri girmek icin   : g\n");
			}
		}
		
		 
		  
		if(l==1)
		{
				
		
		printf("Ýleri icin          : w              Harita icin         : m\n");
		printf("Geri icin           : s              Tuslari gormek icin : t\n");
		printf("Sag icin            : d              Oyundan cikis icin  : x\n");
		printf("Sol icin            : a\n");
		
		l=0;
		}
	
	scanf("%c",&secim);
	fflush(stdin);
	
	switch(secim)
	{
		case 'w': y++; break;
		case 'a': x--; break;
		case 's': y--; break;
		case 'd': x++; break;
		case 't': l=1; break;
		case 'x': fprintf(oyungiris,"%s %s %d\n",kadi,sifre,puan); system("cls"); printf("good by"); fclose(oyungiris); return puan;
		case 'g': 
		{
			system("cls");
			do
			{
				sorutekrarkontrol=2;
		        sorular();
		 	} while(sorutekrarkontrol==4);
			
			break;
		}
		case 'm': 			{
							printf("eee         x= 0  y= 0   yildiz amfi x=2  y=0   matematik  x=4 y=1\n");
							printf("kamu hukuku x=-2  y= 4   kutuphane   x=1  y=4   hidroloji  x=3 y=3\n");
							printf("maden       x= 5  y= 5   aktürya     x=5  y=2   istatistik x=5 y=0\n");
							printf("kimya       x= 3  y=-1   city        x=-2 y=0   jeoloji    x=4 y=4\n");
							printf("cevre       x= 5  y= 4   kimya muh   x=5  y=-2  nukleer    x=0 y=-2\n");
							printf("fizik       x=-1  y=-1   seramik     x=2  y=-6  biyoloji   x=2 y=5\n");
							printf("                         bilgisayar x=4 y=6\n\n");
						
							printf("\nharitadan cikis icin k ye basiniz\n");
							scanf("%c",&hcik);
							fflush(stdin);
							
							switch(hcik)
							{
								case 'k': {
									system("cls");
									break;
								} 
							}
							break;
		
               	 			 } 
               	 		
	fflush(stdin);
    }
    
    
    }
    
	}
