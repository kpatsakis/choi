void fun()
{
  int entity_1 = 38;
  int entity_7 = 30;
  char* entity_4;
  char entity_3[entity_1] = "";
  char* entity_8;
  entity_8 = (char*)malloc(62*sizeof(char));
  entity_8[0]='0';
  memset(entity_3, 'c', entity_1-1);
  entity_3[entity_1-1]='0';
  entity_4 = (char*)malloc(39*sizeof(char));
  entity_4[0]='0';
  entity_1 = 21;
  strcpy(entity_4, entity_3);
}