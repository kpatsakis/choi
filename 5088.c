void fun()
{
  int entity_5 = 86;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  memset(entity_9, 'r', entity_5-1);
  entity_9[entity_5-1]='';
  entity_5 = 8;
  entity_9[31] = 'o';
}