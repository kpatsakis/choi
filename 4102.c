void fun()
{
  int entity_2 = 87;
  char entity_4[84] = "";
  entity_4 = NULL;
  memset(entity_4, 'E', 84-1);
  entity_4[84-1]='';
  entity_4[entity_2] = 'E';
}