void fun()
{
  int entity_5 = 86;
  entity_5 = 99;
  char entity_8 = 'Y';
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  memset(entity_0, 'r', entity_5-1);
  entity_0[entity_5-1]='';
  entity_0[57] = 'p';
}