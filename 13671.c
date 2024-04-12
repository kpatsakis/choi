void fun()
{
  int entity_2 = 33;
  entity_2 = 33;
  char entity_5[entity_2] = "";
  char* entity_8;
  char* entity_3;
  entity_8 = (char*)malloc(73*sizeof(char));
  entity_8[0]='0';
  memset(entity_5, 'K', entity_2-1);
  entity_5[entity_2-1]='0';
  entity_3 = (char*)malloc(89*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_5);
}