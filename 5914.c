void fun()
{
  int entity_8 = 22;
  entity_8 = 75;
  char entity_9[63] = "";
  entity_9 = NULL;
  memset(entity_9, 'q', 63-1);
  entity_9[63-1]='';
  entity_9[entity_8] = 'l';
}