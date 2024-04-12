void fun()
{
  int entity_4 = 9;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  memset(entity_9, 'P', entity_4-1);
  entity_9[entity_4-1]='';
  entity_9[71] = 'z';
}