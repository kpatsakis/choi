void fun()
{
  int entity_4 = 20;
  entity_4 = 72;
  char entity_3[25] = "";
  entity_3 = NULL;
  char entity_6 = 'k';
  char entity_9[35] = "";
  entity_9 = NULL;
  char entity_5[48] = "";
  entity_5 = NULL;
  memset(entity_5, 'i', 48-1);
  entity_5[48-1]='';
  memset(entity_9, 'm', 35-1);
  entity_9[35-1]='';
  memset(entity_3, 'c', 25-1);
  entity_3[25-1]='';
  entity_3[entity_4] = 'Q';
}