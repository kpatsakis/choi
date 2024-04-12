void fun()
{
  int entity_2 = 26;
  char entity_0[12] = "";
  entity_0 = NULL;
  char entity_8 = 'I';
  memset(entity_0, 'J', 12-1);
  entity_0[12-1]='';
  entity_0[entity_2] = 'Y';
}