void fun()
{
  int entity_2 = 77;
  int entity_1 = 26;
  char* entity_3;
  char entity_0[entity_1] = "";
  char* entity_8;
  entity_3 = (char*)malloc(74*sizeof(char));
  entity_3[0]='0';
  memset(entity_0, 'K', entity_1-1);
  entity_0[entity_1-1]='0';
  entity_8 = (char*)malloc(21*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_3, entity_0);
}