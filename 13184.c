void fun()
{
  int entity_0 = 16;
  entity_0 = 100;
  char entity_4[entity_0] = "";
  char* entity_2;
  char entity_6[73] = "";
  char entity_7[75] = "";
  char entity_1[7] = "";
  memset(entity_7, 'n', 75-1);
  entity_7[75-1]='0';
  memset(entity_4, 'c', entity_0-1);
  entity_4[entity_0-1]='0';
  entity_2 = (char*)malloc(98*sizeof(char));
  entity_2[0]='0';
  memset(entity_1, 'N', 7-1);
  entity_1[7-1]='0';
  memset(entity_6, 'P', 73-1);
  entity_6[73-1]='0';
  memcpy(entity_2, entity_4, entity_0*sizeof(char));
}