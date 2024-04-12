void fun()
{
  int entity_0 = 79;
  int entity_5 = 37;
  char* entity_8;
  char entity_6[23] = "";
  char entity_1[94] = "";
  memset(entity_1, 'Y', 94-1);
  entity_1[94-1]='0';
  memset(entity_6, 'E', 23-1);
  entity_6[23-1]='0';
  entity_8 = (char*)malloc(10*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_6);
}