void fun()
{
  int entity_2 = 63;
  char* entity_1;
  char entity_6[17] = "";
  char* entity_8;
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[0]='0';
  memset(entity_6, 'm', 17-1);
  entity_6[17-1]='0';
  entity_1 = (char*)malloc(29*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_8, entity_6);
}