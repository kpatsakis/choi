void fun()
{
  int entity_8 = 56;
  entity_8 = 9;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  char entity_1[17] = "";
  entity_1 = NULL;
  memset(entity_1, 'O', 17-1);
  entity_1[17-1]='';
  memset(entity_2, 'X', entity_8-1);
  entity_2[entity_8-1]='';
  entity_2[99] = 'r';
}