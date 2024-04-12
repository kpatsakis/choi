void fun()
{
  int entity_1 = 38;
  char entity_8 = 'F';
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  memset(entity_2, 'V', entity_1-1);
  entity_2[entity_1-1]='';
  entity_1 = 7;
  entity_2[69] = 'E';
}