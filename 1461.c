void fun()
{
  int entity_5 = 56;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  memset(entity_0, 'g', entity_5-1);
  entity_0[entity_5-1]='';
  entity_0[93] = 'u';
}