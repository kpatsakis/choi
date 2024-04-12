void fun()
{
  int entity_2 = 29;
  int entity_1 = 56;
  char* entity_8;
  char entity_5 = 'a';
  char entity_7[entity_1] = "";
  char* entity_6;
  entity_8 = (char*)malloc(89*sizeof(char));
  entity_8[0]='0';
  memset(entity_7, 'v', entity_1-1);
  entity_7[entity_1-1]='0';
  entity_6 = (char*)malloc(56*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_7);
}