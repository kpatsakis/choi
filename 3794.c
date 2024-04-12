void fun()
{
  int entity_3 = 66;
  int entity_9 = 16;
  char entity_1[48] = "";
  entity_1 = NULL;
  char entity_2[71] = "";
  entity_2 = NULL;
  memset(entity_2, 'R', 71-1);
  entity_2[71-1]='';
  memset(entity_1, 'm', 48-1);
  entity_1[48-1]='';
  entity_1[71] = 'o';
}