void fun()
{
  int entity_6 = 77;
  char entity_1[59] = "";
  char* entity_8;
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[0]='0';
  memset(entity_1, 'K', 59-1);
  entity_1[59-1]='0';
  strcpy(entity_8, entity_1);
}