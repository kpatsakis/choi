void fun()
{
  int entity_1 = 2;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  memset(entity_0, 'W', entity_1-1);
  entity_0[entity_1-1]='';
  entity_0[26] = 'B';
}