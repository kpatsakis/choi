void fun()
{
  char entity_4[73] = "";
  char entity_3[40] = "";
  char entity_1 = 'J';
  char* entity_2;
  memset(entity_4, 's', 73-1);
  entity_4[73-1]='0';
  memset(entity_3, 'v', 40-1);
  entity_3[40-1]='0';
  entity_2 = (char*)malloc(40*sizeof(char));
  entity_2[0]='0';
  entity_3[86] = 'o';
}