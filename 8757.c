void fun()
{
  int entity_8 = 71;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  memset(entity_9, 'P', entity_8-1);
  entity_9[entity_8-1]='';
  entity_8 = 26;
  entity_9[40] = 'g';
}