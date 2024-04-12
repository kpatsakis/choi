void fun()
{
  int entity_4 = 43;
  char entity_0[78] = "";
  entity_0 = NULL;
  memset(entity_0, 'i', 78-1);
  entity_0[78-1]='';
  entity_0[entity_4] = 'v';
}