void fun()
{
  int entity_5 = 10;
  int entity_9 = 86;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  memset(entity_8, 'f', entity_9-1);
  entity_8[entity_9-1]='';
  entity_8[60] = 'Q';
}