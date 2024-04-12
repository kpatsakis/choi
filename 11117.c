void fun()
{
  int entity_7 = 11;
  char entity_1[15] = "";
  char* entity_6;
  memset(entity_1, 'U', 15-1);
  entity_1[15-1]='0';
  entity_6 = (char*)malloc(37*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_1);
}