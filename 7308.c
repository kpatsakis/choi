void fun()
{
  int entity_8 = 86;
  char entity_2[3] = "";
  entity_2 = NULL;
  memset(entity_2, 'F', 3-1);
  entity_2[3-1]='';
  entity_2[entity_8] = 'W';
}