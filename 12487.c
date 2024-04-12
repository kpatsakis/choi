void fun()
{
  int entity_3 = 52;
  int entity_1 = 49;
  char* entity_8;
  char entity_2 = 'w';
  char entity_5[entity_3] = "";
  char* entity_7;
  entity_7 = (char*)malloc(86*sizeof(char));
  entity_7[0]='0';
  memset(entity_5, 'U', entity_3-1);
  entity_5[entity_3-1]='0';
  entity_8 = (char*)malloc(16*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_5);
}