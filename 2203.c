void fun()
{
  int entity_0 = 33;
  char entity_2 = 'p';
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  memset(entity_3, 'L', entity_0-1);
  entity_3[entity_0-1]='';
  entity_3[73] = 'u';
}