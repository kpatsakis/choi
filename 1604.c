void fun()
{
  int entity_2 = 29;
  char entity_9[49] = "";
  entity_9 = NULL;
  memset(entity_9, 'Z', 49-1);
  entity_9[49-1]='';
  entity_9[entity_2] = 'q';
}