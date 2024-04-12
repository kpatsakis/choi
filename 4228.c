void fun()
{
  int entity_8 = 70;
  entity_8 = 42;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  memset(entity_6, 'y', entity_8-1);
  entity_6[entity_8-1]='';
  entity_6[96] = 'c';
}