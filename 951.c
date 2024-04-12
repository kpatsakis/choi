void fun()
{
  int entity_2 = 91;
  char entity_3[6] = "";
  entity_3 = NULL;
  memset(entity_3, 'w', 6-1);
  entity_3[6-1]='';
  entity_3[entity_2] = 'E';
}