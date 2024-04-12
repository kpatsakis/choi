void fun()
{
  int entity_4 = 6;
  entity_4 = 30;
  char entity_5[31] = "";
  entity_5 = NULL;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  memset(entity_9, 'V', entity_4-1);
  entity_9[entity_4-1]='';
  memset(entity_5, 'U', 31-1);
  entity_5[31-1]='';
  entity_9[88] = 'I';
}