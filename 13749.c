void fun()
{
  int entity_2 = 54;
  int entity_5 = 71;
  entity_2 = 45;
  char entity_1[12] = "";
  char entity_6[30] = "";
  char* entity_3;
  char entity_9 = 'G';
  memset(entity_6, 'T', 30-1);
  entity_6[30-1]='0';
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[0]='0';
  memset(entity_1, 'U', 12-1);
  entity_1[12-1]='0';
  memcpy(entity_3, entity_6, 30*sizeof(char));
}