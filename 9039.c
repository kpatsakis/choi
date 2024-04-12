void fun()
{
  char entity_2[65] = "";
  entity_2 = NULL;
  char entity_5[25] = "";
  entity_5 = NULL;
  char entity_3[61] = "";
  entity_3 = NULL;
  memset(entity_3, 'H', 61-1);
  entity_3[61-1]='';
  memset(entity_2, 'e', 65-1);
  entity_2[65-1]='';
  memset(entity_5, 'V', 25-1);
  entity_5[25-1]='';
  entity_3[39] = 'm';
}