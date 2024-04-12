void fun()
{
  int entity_3 = 61;
  int entity_7 = 76;
  char entity_9[91] = "";
  entity_9 = NULL;
  memset(entity_9, 'S', 91-1);
  entity_9[91-1]='';
  entity_9[entity_7] = 'I';
}