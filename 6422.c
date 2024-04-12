void fun()
{
  int entity_0 = 53;
  entity_0 = 79;
  char entity_1[61] = "";
  entity_1 = NULL;
  memset(entity_1, 'S', 61-1);
  entity_1[61-1]='';
  entity_1[entity_0] = 'E';
}