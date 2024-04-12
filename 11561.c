void fun()
{
  int entity_8 = 11;
  char entity_7[1] = "";
  char entity_9[81] = "";
  char* entity_4;
  char* entity_0;
  memset(entity_9, 'S', 81-1);
  entity_9[81-1]='0';
  memset(entity_7, 'L', 1-1);
  entity_7[1-1]='0';
  entity_0 = (char*)malloc(51*sizeof(char));
  entity_0[0]='0';
  entity_4 = (char*)malloc(8*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_9);
}