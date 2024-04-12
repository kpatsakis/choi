void fun()
{
  int entity_1 = 54;
  char entity_6[entity_1] = "";
  char* entity_3;
  char* entity_0;
  memset(entity_6, 'y', entity_1-1);
  entity_6[entity_1-1]='0';
  entity_0 = (char*)malloc(86*sizeof(char));
  entity_0[0]='0';
  entity_3 = (char*)malloc(74*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_6);
}