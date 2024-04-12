void fun()
{
  int entity_1 = 64;
  char* entity_6;
  char entity_4[81] = "";
  memset(entity_4, 'i', 81-1);
  entity_4[81-1]='0';
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[0]='0';
  entity_1 = 38;
  strcpy(entity_6, entity_4);
}