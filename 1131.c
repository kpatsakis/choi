void fun()
{
  int entity_3 = 77;
  entity_3 = 62;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  memset(entity_9, 'z', entity_3-1);
  entity_9[entity_3-1]='';
  entity_9[29] = 'J';
}