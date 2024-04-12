void fun()
{
  int entity_2 = 17;
  int entity_6 = 42;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  memset(entity_0, 'a', entity_2-1);
  entity_0[entity_2-1]='';
  entity_2 = 21;
  entity_0[20] = 'Q';
}