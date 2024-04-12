void fun()
{
  int entity_7 = 26;
  char entity_3[58] = "";
  char entity_4[15] = "";
  char entity_2[66] = "";
  char* entity_0;
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'c', 15-1);
  entity_4[15-1]='0';
  memset(entity_2, 't', 66-1);
  entity_2[66-1]='0';
  memset(entity_3, 'i', 58-1);
  entity_3[58-1]='0';
  memcpy(entity_0, entity_3, 58*sizeof(char));
}