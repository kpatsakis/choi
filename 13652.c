void fun()
{
  int entity_1 = 27;
  char entity_4[entity_1] = "";
  char entity_5[1] = "";
  char* entity_7;
  char entity_2[60] = "";
  memset(entity_4, 'T', entity_1-1);
  entity_4[entity_1-1]='0';
  entity_7 = (char*)malloc(11*sizeof(char));
  entity_7[0]='0';
  memset(entity_2, 'f', 60-1);
  entity_2[60-1]='0';
  memset(entity_5, 'A', 1-1);
  entity_5[1-1]='0';
  entity_1 = 7;
  strcpy(entity_7, entity_4);
}