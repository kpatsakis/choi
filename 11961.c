void fun()
{
  char* entity_8;
  char* entity_6;
  char entity_0[63] = "";
  char entity_3[48] = "";
  entity_8 = (char*)malloc(19*sizeof(char));
  entity_8[0]='0';
  memset(entity_3, 'J', 48-1);
  entity_3[48-1]='0';
  memset(entity_0, 'O', 63-1);
  entity_0[63-1]='0';
  entity_6 = (char*)malloc(24*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_3);
}