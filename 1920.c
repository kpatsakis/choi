void fun()
{
  int entity_6 = 55;
  int entity_5 = 2;
  char entity_3[20] = "";
  entity_3 = NULL;
  memset(entity_3, 'o', 20-1);
  entity_3[20-1]='';
  entity_5 = 81;
  entity_3[entity_5] = 'M';
}