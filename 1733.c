void fun()
{
  int entity_2 = 71;
  char entity_8[54] = "";
  entity_8 = NULL;
  char entity_9[38] = "";
  entity_9 = NULL;
  memset(entity_8, 'H', 54-1);
  entity_8[54-1]='';
  memset(entity_9, 'C', 38-1);
  entity_9[38-1]='';
  entity_2 = 50;
  entity_9[entity_2] = 't';
}