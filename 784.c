void fun()
{
  int entity_5 = 7;
  entity_5 = 47;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  memset(entity_0, 'X', entity_5-1);
  entity_0[entity_5-1]='';
  entity_0[78] = 'M';
}