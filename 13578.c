void fun()
{
  int entity_5 = 99;
  entity_5 = 99;
  char* entity_8;
  char* entity_7;
  char entity_3[entity_5] = "";
  entity_7 = (char*)malloc(29*sizeof(char));
  entity_7[0]='0';
  entity_8 = (char*)malloc(57*sizeof(char));
  entity_8[0]='0';
  memset(entity_3, 'd', entity_5-1);
  entity_3[entity_5-1]='0';
  strcpy(entity_7, entity_3);
}