void fun()
{
  int entity_4 = 1;
  entity_4 = 2;
  char entity_8[74] = "";
  char entity_6[19] = "";
  char entity_3[49] = "";
  char* entity_5;
  memset(entity_8, 'l', 74-1);
  entity_8[74-1]='0';
  memset(entity_3, 'J', 49-1);
  entity_3[49-1]='0';
  memset(entity_6, 'o', 19-1);
  entity_6[19-1]='0';
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_6);
}