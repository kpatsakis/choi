void fun()
{
  int entity_1 = 26;
  char* entity_6;
  char* entity_9;
  char entity_0[8] = "";
  char entity_7[22] = "";
  memset(entity_7, 'W', 22-1);
  entity_7[22-1]='0';
  entity_6 = (char*)malloc(40*sizeof(char));
  entity_6[0]='0';
  memset(entity_0, 'B', 8-1);
  entity_0[8-1]='0';
  entity_9 = (char*)malloc(97*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_7);
}