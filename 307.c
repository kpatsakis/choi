void fun()
{
  int entity_0 = 12;
  entity_0 = 71;
  char entity_7 = 'l';
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  memset(entity_9, 'u', entity_0-1);
  entity_9[entity_0-1]='';
  entity_9[15] = 'f';
}