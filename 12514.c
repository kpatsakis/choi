void fun()
{
  int entity_1 = 0;
  int entity_7 = 26;
  char* entity_9;
  char entity_0[22] = "";
  char entity_6[entity_7] = "";
  entity_9 = (char*)malloc(16*sizeof(char));
  entity_9[0]='0';
  memset(entity_0, 'j', 22-1);
  entity_0[22-1]='0';
  memset(entity_6, 'X', entity_7-1);
  entity_6[entity_7-1]='0';
  strcpy(entity_9, entity_6);
}