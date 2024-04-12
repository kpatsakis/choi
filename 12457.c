void fun()
{
  int entity_3 = 85;
  char entity_8[62] = "";
  char entity_4[61] = "";
  char* entity_0;
  char* entity_6;
  entity_6 = (char*)malloc(entity_3*sizeof(char));
  entity_6[0]='0';
  memset(entity_8, 'X', 62-1);
  entity_8[62-1]='0';
  entity_0 = (char*)malloc(74*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'O', 61-1);
  entity_4[61-1]='0';
  strcpy(entity_6, entity_4);
}