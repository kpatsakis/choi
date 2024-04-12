void fun()
{
  int entity_8 = 24;
  entity_8 = 30;
  char entity_0 = 'O';
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  char entity_2[25] = "";
  entity_2 = NULL;
  char entity_5 = 'E';
  memset(entity_1, 'Y', entity_8-1);
  entity_1[entity_8-1]='';
  memset(entity_2, 'z', 25-1);
  entity_2[25-1]='';
  entity_1[26] = 'q';
}