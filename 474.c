void fun()
{
  int entity_9 = 85;
  char entity_6[99] = "";
  entity_6 = NULL;
  memset(entity_6, 'Z', 99-1);
  entity_6[99-1]='';
  entity_9 = 87;
  entity_6[entity_9] = 'p';
}