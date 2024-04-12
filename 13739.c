void fun()
{
  int entity_3 = 71;
  char entity_8[7] = "";
  char entity_1 = 'E';
  char* entity_4;
  char entity_0 = 'P';
  char entity_9[78] = "";
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'T', 78-1);
  entity_9[78-1]='0';
  memset(entity_8, 'A', 7-1);
  entity_8[7-1]='0';
  entity_3 = 11;
  strcpy(entity_4, entity_9);
}