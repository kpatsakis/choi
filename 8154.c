void fun()
{
  int entity_8 = 67;
  char entity_9 = 'v';
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  memset(entity_5, 'u', entity_8-1);
  entity_5[entity_8-1]='';
  entity_5[39] = 'i';
}