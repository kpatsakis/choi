void fun()
{
  int entity_1 = 54;
  char entity_4[12] = "";
  char* entity_8;
  char* entity_6;
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[0]='0';
  memset(entity_4, 'y', 12-1);
  entity_4[12-1]='0';
  entity_8 = (char*)malloc(51*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_6, entity_4);
}