void fun()
{
  int entity_1 = 62;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  char entity_9 = 'V';
  memset(entity_6, 'l', entity_1-1);
  entity_6[entity_1-1]='';
  entity_6[91] = 'D';
}