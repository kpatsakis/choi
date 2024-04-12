void fun()
{
  int entity_8 = 40;
  char entity_4 = 'r';
  char entity_1[55] = "";
  entity_1 = NULL;
  char entity_7[73] = "";
  entity_7 = NULL;
  memset(entity_7, 'M', 73-1);
  entity_7[73-1]='';
  memset(entity_1, 'w', 55-1);
  entity_1[55-1]='';
  entity_7[entity_8] = 'P';
}