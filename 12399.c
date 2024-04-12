void fun()
{
  int entity_0 = 92;
  char* entity_9;
  char* entity_6;
  char entity_7[22] = "";
  memset(entity_7, 'x', 22-1);
  entity_7[22-1]='0';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[0]='0';
  entity_6 = (char*)malloc(56*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_9, entity_7);
}