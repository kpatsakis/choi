void fun()
{
  int entity_4 = 6;
  entity_4 = 6;
  char entity_1[entity_4] = "";
  char* entity_9;
  char entity_2[28] = "";
  memset(entity_2, 'R', 28-1);
  entity_2[28-1]='0';
  memset(entity_1, 'k', entity_4-1);
  entity_1[entity_4-1]='0';
  entity_9 = (char*)malloc(42*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_1);
}