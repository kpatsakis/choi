void fun()
{
  int entity_5 = 3;
  char entity_0[44] = "";
  char* entity_2;
  char entity_6[42] = "";
  char* entity_8;
  char entity_7[63] = "";
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[0]='0';
  memset(entity_0, 'h', 44-1);
  entity_0[44-1]='0';
  memset(entity_6, 'z', 42-1);
  entity_6[42-1]='0';
  entity_2 = (char*)malloc(36*sizeof(char));
  entity_2[0]='0';
  memset(entity_7, 'I', 63-1);
  entity_7[63-1]='0';
  strcpy(entity_8, entity_6);
}