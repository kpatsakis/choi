void fun()
{
  int entity_5 = 25;
  entity_5 = 35;
  char entity_1[87] = "";
  char entity_4 = 'I';
  char entity_8[39] = "";
  char* entity_3;
  memset(entity_1, 'N', 87-1);
  entity_1[87-1]='0';
  memset(entity_8, 'i', 39-1);
  entity_8[39-1]='0';
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_1);
}