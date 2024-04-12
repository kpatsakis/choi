void fun()
{
  int entity_1 = 38;
  int entity_4 = 81;
  char* entity_5;
  char entity_8[81] = "";
  memset(entity_8, 's', 81-1);
  entity_8[81-1]='0';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_8);
}