void fun()
{
  int entity_9 = 13;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  memset(entity_6, 'h', entity_9-1);
  entity_6[entity_9-1]='';
  entity_6[71] = 'A';
}