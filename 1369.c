void fun()
{
  int entity_9 = 93;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  memset(entity_4, 'w', entity_9-1);
  entity_4[entity_9-1]='';
  entity_4[96] = 'a';
}