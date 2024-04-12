void fun()
{
  int entity_3 = 66;
  entity_3 = 3;
  char entity_9[91] = "";
  entity_9 = NULL;
  memset(entity_9, 'g', 91-1);
  entity_9[91-1]='';
  entity_9[entity_3] = 'u';
}