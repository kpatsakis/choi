void fun()
{
  int entity_1 = 93;
  char entity_7[entity_1] = "";
  char entity_2[41] = "";
  char entity_9 = 'B';
  char entity_0[79] = "";
  char* entity_4;
  entity_4 = (char*)malloc(16*sizeof(char));
  entity_4[0]='0';
  memset(entity_7, 'R', entity_1-1);
  entity_7[entity_1-1]='0';
  memset(entity_2, 'Q', 41-1);
  entity_2[41-1]='0';
  memset(entity_0, 'D', 79-1);
  entity_0[79-1]='0';
  entity_1 = 81;
  strcpy(entity_4, entity_7);
}