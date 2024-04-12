void fun()
{
  int entity_7 = 54;
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  memset(entity_9, 'b', entity_7-1);
  entity_9[entity_7-1]='';
  entity_7 = 72;
  entity_9[39] = 'T';
}