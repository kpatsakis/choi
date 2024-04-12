void fun()
{
  int entity_8 = 71;
  int entity_7 = 2;
  char entity_9[40] = "";
  entity_9 = NULL;
  memset(entity_9, 'c', 40-1);
  entity_9[40-1]='';
  entity_9[entity_8] = 'r';
}