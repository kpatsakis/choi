void fun()
{
  int entity_3 = 77;
  char entity_0[41] = "";
  entity_0 = NULL;
  memset(entity_0, 't', 41-1);
  entity_0[41-1]='';
  entity_0[entity_3] = 'b';
}