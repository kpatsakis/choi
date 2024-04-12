void fun()
{
  int entity_9 = 72;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  memset(entity_8, 'Q', entity_9-1);
  entity_8[entity_9-1]='';
  entity_9 = 95;
  entity_8[11] = 'm';
}