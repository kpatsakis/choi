void fun()
{
  char entity_7[29] = "";
  char* entity_8;
  char entity_0[20] = "";
  char* entity_4;
  memset(entity_7, 'P', 29-1);
  entity_7[29-1]='0';
  memset(entity_0, 'w', 20-1);
  entity_0[20-1]='0';
  entity_8 = (char*)malloc(29*sizeof(char));
  entity_8[0]='0';
  entity_4 = (char*)malloc(55*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_7, 29*sizeof(char));
}