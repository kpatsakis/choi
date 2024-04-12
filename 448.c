void fun()
{
  int entity_5 = 18;
  entity_5 = 27;
  char entity_1 = 'S';
  char entity_9[91] = "";
  entity_9 = NULL;
  memset(entity_9, 'k', 91-1);
  entity_9[91-1]='';
  entity_9[entity_5] = 'n';
}