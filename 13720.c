void fun()
{
  int entity_2 = 92;
  entity_2 = 92;
  char entity_3 = 'c';
  char entity_1[entity_2] = "";
  char* entity_7;
  char entity_9[33] = "";
  memset(entity_9, 'U', 33-1);
  entity_9[33-1]='0';
  entity_7 = (char*)malloc(37*sizeof(char));
  entity_7[0]='0';
  memset(entity_1, 'x', entity_2-1);
  entity_1[entity_2-1]='0';
  strcpy(entity_7, entity_1);
}