void fun()
{
  int entity_8 = 51;
  char entity_9[19] = "";
  char entity_4[entity_8] = "";
  char entity_0[22] = "";
  char* entity_7;
  char entity_6[34] = "";
  memset(entity_4, 'j', entity_8-1);
  entity_4[entity_8-1]='0';
  memset(entity_9, 'V', 19-1);
  entity_9[19-1]='0';
  memset(entity_6, 'Q', 34-1);
  entity_6[34-1]='0';
  memset(entity_0, 'A', 22-1);
  entity_0[22-1]='0';
  entity_7 = (char*)malloc(69*sizeof(char));
  entity_7[0]='0';
  entity_8 = 70;
  memcpy(entity_7, entity_4, entity_8*sizeof(char));
}