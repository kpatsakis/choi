void fun()
{
  int entity_9 = 26;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  memset(entity_4, 'P', entity_9-1);
  entity_4[entity_9-1]='';
  entity_9 = 82;
  entity_4[14] = 'z';
}