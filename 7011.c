void fun()
{
  int entity_4 = 23;
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  memset(entity_0, 'w', entity_4-1);
  entity_0[entity_4-1]='';
  entity_0[24] = 'O';
}