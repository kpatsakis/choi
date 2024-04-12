void fun()
{
  int entity_8 = 79;
  entity_8 = 87;
  char* entity_1;
  char entity_3[59] = "";
  memset(entity_3, 'V', 59-1);
  entity_3[59-1]='0';
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_3);
}