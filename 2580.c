void fun()
{
  int entity_0 = 43;
  char entity_1[88] = "";
  entity_1 = NULL;
  char entity_9[25] = "";
  entity_9 = NULL;
  memset(entity_1, 'l', 88-1);
  entity_1[88-1]='';
  memset(entity_9, 'q', 25-1);
  entity_9[25-1]='';
  entity_0 = 26;
  entity_1[entity_0] = 'v';
}