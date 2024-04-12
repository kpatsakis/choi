void fun()
{
  int entity_8 = 6;
  char entity_3[2] = "";
  entity_3 = NULL;
  char entity_7[30] = "";
  entity_7 = NULL;
  memset(entity_7, 'w', 30-1);
  entity_7[30-1]='';
  memset(entity_3, 'R', 2-1);
  entity_3[2-1]='';
  entity_7[entity_8] = 'c';
}