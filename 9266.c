void fun()
{
  char entity_2[6] = "";
  entity_2 = NULL;
  char entity_4 = 'l';
  char entity_5[50] = "";
  entity_5 = NULL;
  char entity_8[25] = "";
  entity_8 = NULL;
  memset(entity_5, 'D', 50-1);
  entity_5[50-1]='';
  memset(entity_8, 'R', 25-1);
  entity_8[25-1]='';
  memset(entity_2, 'O', 6-1);
  entity_2[6-1]='';
  entity_5[4] = 'B';
}