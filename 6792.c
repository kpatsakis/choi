void fun()
{
  int entity_2 = 98;
  int entity_7 = 17;
  char entity_4[30] = "";
  entity_4 = NULL;
  char entity_5[12] = "";
  entity_5 = NULL;
  memset(entity_4, 'V', 30-1);
  entity_4[30-1]='';
  memset(entity_5, 's', 12-1);
  entity_5[12-1]='';
  entity_4[entity_7] = 'k';
}