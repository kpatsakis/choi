void fun()
{
  int entity_1 = 80;
  char entity_5 = 'a';
  char entity_6 = 'O';
  char entity_3[74] = "";
  entity_3 = NULL;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  memset(entity_3, 'F', 74-1);
  entity_3[74-1]='';
  memset(entity_9, 'y', entity_1-1);
  entity_9[entity_1-1]='';
  entity_9[40] = 'W';
}