void fun()
{
  char entity_7[19] = "";
  char* entity_5;
  char entity_8[81] = "";
  char* entity_4;
  memset(entity_7, 'X', 19-1);
  entity_7[19-1]='0';
  entity_4 = (char*)malloc(93*sizeof(char));
  entity_4[0]='0';
  entity_5 = (char*)malloc(42*sizeof(char));
  entity_5[0]='0';
  memset(entity_8, 'p', 81-1);
  entity_8[81-1]='0';
  memcpy(entity_4, entity_8, 81*sizeof(char));
}