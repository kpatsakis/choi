void fun()
{
  int entity_6 = 62;
  entity_6 = 4;
  char entity_2[40] = "";
  entity_2 = NULL;
  memset(entity_2, 'X', 40-1);
  entity_2[40-1]='';
  entity_2[entity_6] = 'q';
}