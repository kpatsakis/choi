void fun()
{
  int entity_8 = 7;
  int entity_2 = 34;
  char entity_4[61] = "";
  entity_4 = NULL;
  char entity_1[75] = "";
  entity_1 = NULL;
  memset(entity_1, 'P', 75-1);
  entity_1[75-1]='';
  memset(entity_4, 'b', 61-1);
  entity_4[61-1]='';
  entity_4[entity_2] = 'O';
}