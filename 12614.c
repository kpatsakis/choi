void fun()
{
  int entity_6 = 92;
  char* entity_8;
  char entity_4[entity_6] = "";
  char entity_2[56] = "";
  char entity_3[0] = "";
  memset(entity_2, 'M', 56-1);
  entity_2[56-1]='0';
  entity_8 = (char*)malloc(12*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'J', entity_6-1);
  entity_4[entity_6-1]='0';
  memset(entity_3, 'Z', 0-1);
  entity_3[0-1]='0';
  strcpy(entity_8, entity_4);
}