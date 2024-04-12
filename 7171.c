void fun()
{
  int entity_6 = 31;
  int entity_2 = 21;
  entity_2 = 80;
  char entity_3[20] = "";
  entity_3 = NULL;
  memset(entity_3, 'N', 20-1);
  entity_3[20-1]='';
  entity_3[entity_2] = 'Z';
}