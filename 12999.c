void fun()
{
  int entity_8 = 20;
  char entity_9[56] = "";
  char entity_4[entity_8] = "";
  char* entity_0;
  char entity_1[34] = "";
  char* entity_7;
  entity_0 = (char*)malloc(90*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'z', entity_8-1);
  entity_4[entity_8-1]='0';
  entity_7 = (char*)malloc(64*sizeof(char));
  entity_7[0]='0';
  memset(entity_1, 'X', 34-1);
  entity_1[34-1]='0';
  memset(entity_9, 'h', 56-1);
  entity_9[56-1]='0';
  memcpy(entity_7, entity_4, entity_8*sizeof(char));
}