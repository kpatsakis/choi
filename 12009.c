void fun()
{
  int entity_6 = 33;
  char entity_4[83] = "";
  char entity_0[36] = "";
  char entity_1[44] = "";
  char* entity_9;
  memset(entity_1, 'A', 44-1);
  entity_1[44-1]='0';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[0]='0';
  memset(entity_0, 'K', 36-1);
  entity_0[36-1]='0';
  memset(entity_4, 'G', 83-1);
  entity_4[83-1]='0';
  strcpy(entity_9, entity_0);
}