void fun()
{
  int entity_4 = 9;
  char entity_8 = 'x';
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  memset(entity_0, 'Z', entity_4-1);
  entity_0[entity_4-1]='';
  entity_4 = 10;
  entity_0[31] = 'e';
}