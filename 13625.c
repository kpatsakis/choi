void fun()
{
  int entity_1 = 98;
  int entity_7 = 74;
  entity_1 = 88;
  char* entity_4;
  char entity_2[46] = "";
  char entity_8[87] = "";
  memset(entity_8, 'f', 87-1);
  entity_8[87-1]='0';
  memset(entity_2, 'T', 46-1);
  entity_2[46-1]='0';
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_8);
}