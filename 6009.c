void fun()
{
  int entity_8 = 96;
  int entity_5 = 40;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  memset(entity_9, 'b', entity_5-1);
  entity_9[entity_5-1]='';
  entity_9[10] = 'u';
}