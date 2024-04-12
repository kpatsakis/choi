void fun()
{
  int entity_2 = 86;
  int entity_7 = 80;
  entity_7 = 51;
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  memset(entity_9, 'J', entity_7-1);
  entity_9[entity_7-1]='';
  entity_9[44] = 'Q';
}