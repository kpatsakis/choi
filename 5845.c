void fun()
{
  int entity_7 = 64;
  char entity_6 = 'H';
  char entity_9[27] = "";
  entity_9 = NULL;
  memset(entity_9, 'm', 27-1);
  entity_9[27-1]='';
  entity_9[entity_7] = 'c';
}