void fun()
{
  int entity_2 = 38;
  char entity_9[55] = "";
  entity_9 = NULL;
  char entity_7[15] = "";
  entity_7 = NULL;
  memset(entity_7, 'x', 15-1);
  entity_7[15-1]='';
  memset(entity_9, 'n', 55-1);
  entity_9[55-1]='';
  entity_2 = 5;
  entity_9[entity_2] = 'I';
}