void fun()
{
  int entity_3 = 40;
  char entity_5[29] = "";
  char* entity_6;
  char* entity_4;
  char entity_0[39] = "";
  memset(entity_5, 'M', 29-1);
  entity_5[29-1]='0';
  entity_6 = (char*)malloc(entity_3*sizeof(char));
  entity_6[0]='0';
  entity_4 = (char*)malloc(24*sizeof(char));
  entity_4[0]='0';
  memset(entity_0, 'O', 39-1);
  entity_0[39-1]='0';
  strcpy(entity_6, entity_5);
}