void fun()
{
  int entity_1 = 24;
  entity_1 = 14;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  memset(entity_9, 'P', entity_1-1);
  entity_9[entity_1-1]='';
  entity_9[44] = 'D';
}