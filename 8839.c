void fun()
{
  int entity_8 = 92;
  char entity_9 = 'H';
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  memset(entity_0, 'B', entity_8-1);
  entity_0[entity_8-1]='';
  entity_0[96] = 'h';
}