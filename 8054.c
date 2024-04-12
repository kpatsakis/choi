void fun()
{
  int entity_0 = 4;
  char entity_6[30] = "";
  entity_6 = NULL;
  memset(entity_6, 'c', 30-1);
  entity_6[30-1]='';
  entity_6[entity_0] = 'g';
}