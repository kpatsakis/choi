void fun()
{
  int entity_6 = 57;
  char entity_1[15] = "";
  entity_1 = NULL;
  char entity_5[42] = "";
  entity_5 = NULL;
  char entity_9[51] = "";
  entity_9 = NULL;
  char entity_2 = 'D';
  memset(entity_5, 'A', 42-1);
  entity_5[42-1]='';
  memset(entity_1, 'P', 15-1);
  entity_1[15-1]='';
  memset(entity_9, 'I', 51-1);
  entity_9[51-1]='';
  entity_9[entity_6] = 'q';
}