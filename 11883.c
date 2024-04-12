void fun()
{
  char entity_3[14] = "";
  char* entity_8;
  char entity_2[19] = "";
  char entity_4[91] = "";
  char entity_7 = 'V';
  memset(entity_4, 'b', 91-1);
  entity_4[91-1]='0';
  memset(entity_3, 'L', 14-1);
  entity_3[14-1]='0';
  memset(entity_2, 'o', 19-1);
  entity_2[19-1]='0';
  entity_8 = (char*)malloc(74*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_2, 19*sizeof(char));
}