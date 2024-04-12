void fun()
{
  int entity_1 = 54;
  entity_1 = 21;
  char entity_9[63] = "";
  entity_9 = NULL;
  char entity_7 = 'W';
  memset(entity_9, 'c', 63-1);
  entity_9[63-1]='';
  entity_9[entity_1] = 'B';
}