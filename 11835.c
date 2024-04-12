void fun()
{
  int entity_8 = 9;
  char entity_6[14] = "";
  char* entity_7;
  char entity_0[66] = "";
  char entity_5[65] = "";
  memset(entity_5, 'L', 65-1);
  entity_5[65-1]='0';
  entity_7 = (char*)malloc(71*sizeof(char));
  entity_7[0]='0';
  memset(entity_0, 'v', 66-1);
  entity_0[66-1]='0';
  memset(entity_6, 't', 14-1);
  entity_6[14-1]='0';
  strcpy(entity_7, entity_5);
}