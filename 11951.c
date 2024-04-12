void fun()
{
  char* entity_0;
  char entity_6[32] = "";
  char entity_5[32] = "";
  char* entity_4;
  memset(entity_5, 'b', 32-1);
  entity_5[32-1]='0';
  entity_0 = (char*)malloc(29*sizeof(char));
  entity_0[0]='0';
  entity_4 = (char*)malloc(65*sizeof(char));
  entity_4[0]='0';
  memset(entity_6, 'o', 32-1);
  entity_6[32-1]='0';
  memcpy(entity_4, entity_5, 32*sizeof(char));
}