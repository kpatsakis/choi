void fun()
{
  int entity_6 = 31;
  entity_6 = 12;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  char entity_9[57] = "";
  entity_9 = NULL;
  memset(entity_9, 'S', 57-1);
  entity_9[57-1]='';
  memset(entity_5, 'X', entity_6-1);
  entity_5[entity_6-1]='';
  entity_5[18] = 'p';
}