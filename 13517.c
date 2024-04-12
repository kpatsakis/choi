void fun()
{
  int entity_1 = 69;
  char entity_8[89] = "";
  char entity_5[22] = "";
  char entity_9[60] = "";
  char* entity_0;
  memset(entity_5, 'b', 22-1);
  entity_5[22-1]='0';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[0]='0';
  memset(entity_9, 'y', 60-1);
  entity_9[60-1]='0';
  memset(entity_8, 'q', 89-1);
  entity_8[89-1]='0';
  entity_1 = 19;
  strcpy(entity_0, entity_8);
}