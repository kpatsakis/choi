void fun()
{
  int entity_3 = 34;
  int entity_8 = 42;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  char entity_1 = 'e';
  memset(entity_0, 'e', entity_8-1);
  entity_0[entity_8-1]='';
  entity_0[81] = 'G';
}