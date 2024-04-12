void fun()
{
  int entity_7 = 38;
  int entity_8 = 14;
  char* entity_5;
  char entity_1[entity_8] = "";
  char* entity_6;
  char* entity_4;
  memset(entity_1, 'I', entity_8-1);
  entity_1[entity_8-1]='0';
  entity_5 = (char*)malloc(0*sizeof(char));
  entity_5[0]='0';
  entity_4 = (char*)malloc(77*sizeof(char));
  entity_4[0]='0';
  entity_6 = (char*)malloc(82*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_4, entity_1);
}