void fun()
{
  int entity_8 = 64;
  entity_8 = 53;
  char entity_0[34] = "";
  entity_0 = NULL;
  memset(entity_0, 'a', 34-1);
  entity_0[34-1]='';
  entity_0[entity_8] = 'z';
}