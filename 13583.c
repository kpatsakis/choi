void fun()
{
  int entity_5 = 38;
  entity_5 = 53;
  char* entity_3;
  char entity_1[63] = "";
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[0]='0';
  memset(entity_1, 'P', 63-1);
  entity_1[63-1]='0';
  strcpy(entity_3, entity_1);
}