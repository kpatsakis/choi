void fun()
{
  int entity_0 = 42;
  char entity_6[14] = "";
  entity_6 = NULL;
  memset(entity_6, 'f', 14-1);
  entity_6[14-1]='';
  entity_0 = 88;
  entity_6[entity_0] = 'D';
}