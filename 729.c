void fun()
{
  int entity_5 = 57;
  int entity_4 = 71;
  char entity_1 = 'U';
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  memset(entity_2, 'C', entity_5-1);
  entity_2[entity_5-1]='';
  entity_2[25] = 'O';
}