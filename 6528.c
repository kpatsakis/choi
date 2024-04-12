void fun()
{
  int entity_8 = 17;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  memset(entity_9, 'L', entity_8-1);
  entity_9[entity_8-1]='';
  entity_9[37] = 'N';
}