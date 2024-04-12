void fun()
{
  int entity_6 = 47;
  int entity_7 = 27;
  int entity_4 = 77;
  int entity_8 = 79;
  entity_6 = 34;
  char entity_3[39] = "";
  char* entity_0;
  memset(entity_3, 'X', 39-1);
  entity_3[39-1]='0';
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_3);
}