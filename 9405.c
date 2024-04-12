void fun()
{
  int entity_2 = 10;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  memset(entity_0, 'N', entity_2-1);
  entity_0[entity_2-1]='';
  entity_0[100] = 'c';
}