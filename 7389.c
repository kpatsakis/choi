void fun()
{
  int entity_5 = 66;
  int entity_7 = 86;
  int entity_1 = 4;
  char entity_9[99] = "";
  entity_9 = NULL;
  memset(entity_9, 'S', 99-1);
  entity_9[99-1]='';
  entity_9[entity_7] = 'i';
}