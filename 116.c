void fun()
{
  char entity_8 = 'm';
  char entity_4[85] = "";
  entity_4 = NULL;
  char entity_5[28] = "";
  entity_5 = NULL;
  memset(entity_5, 'u', 28-1);
  entity_5[28-1]='';
  memset(entity_4, 'm', 85-1);
  entity_4[85-1]='';
  entity_4[18] = 'c';
}