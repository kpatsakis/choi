void fun()
{
  int entity_8 = 10;
  entity_8 = 38;
  char entity_4[97] = "";
  char* entity_5;
  char entity_3[83] = "";
  memset(entity_3, 'v', 83-1);
  entity_3[83-1]='0';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[0]='0';
  memset(entity_4, 'I', 97-1);
  entity_4[97-1]='0';
  strcpy(entity_5, entity_4);
}