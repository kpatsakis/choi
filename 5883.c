void fun()
{
  int entity_7 = 100;
  char entity_9[85] = "";
  entity_9 = NULL;
  memset(entity_9, 'F', 85-1);
  entity_9[85-1]='';
  entity_9[entity_7] = 'p';
}