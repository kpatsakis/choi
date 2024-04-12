void fun()
{
  int entity_6 = 2;
  char entity_7[98] = "";
  char entity_2[entity_6] = "";
  char entity_9[30] = "";
  char* entity_4;
  memset(entity_7, 'H', 98-1);
  entity_7[98-1]='0';
  memset(entity_9, 'q', 30-1);
  entity_9[30-1]='0';
  memset(entity_2, 'Q', entity_6-1);
  entity_2[entity_6-1]='0';
  entity_4 = (char*)malloc(76*sizeof(char));
  entity_4[0]='0';
  entity_6 = 100;
  strcpy(entity_4, entity_2);
}