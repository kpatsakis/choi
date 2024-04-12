void fun()
{
  int entity_4 = 67;
  char entity_3[32] = "";
  char entity_8[27] = "";
  char* entity_7;
  char* entity_6;
  entity_7 = (char*)malloc(76*sizeof(char));
  entity_7[0]='0';
  memset(entity_3, 'M', 32-1);
  entity_3[32-1]='0';
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[0]='0';
  memset(entity_8, 'z', 27-1);
  entity_8[27-1]='0';
  memcpy(entity_6, entity_3, 32*sizeof(char));
}