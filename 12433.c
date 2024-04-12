void fun()
{
  int entity_0 = 73;
  int entity_9 = 45;
  char* entity_1;
  char entity_8[15] = "";
  char entity_3[66] = "";
  char entity_6[56] = "";
  memset(entity_8, 'G', 15-1);
  entity_8[15-1]='0';
  memset(entity_6, 'Q', 56-1);
  entity_6[56-1]='0';
  memset(entity_3, 'm', 66-1);
  entity_3[66-1]='0';
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_3);
}