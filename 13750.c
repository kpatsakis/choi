void fun()
{
  int entity_7 = 83;
  char entity_6[39] = "";
  char entity_4[81] = "";
  char* entity_8;
  memset(entity_4, 'b', 81-1);
  entity_4[81-1]='0';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[0]='0';
  memset(entity_6, 'F', 39-1);
  entity_6[39-1]='0';
  entity_7 = 34;
  memcpy(entity_8, entity_6, 39*sizeof(char));
}