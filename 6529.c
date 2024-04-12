void fun()
{
  int entity_9 = 78;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  memset(entity_5, 'v', entity_9-1);
  entity_5[entity_9-1]='';
  entity_5[23] = 'm';
}