void fun()
{
  int entity_5 = 43;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  memset(entity_0, 'Q', entity_5-1);
  entity_0[entity_5-1]='';
  entity_0[91] = 'M';
}