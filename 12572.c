void fun()
{
  int entity_7 = 33;
  int entity_5 = 16;
  char entity_8[29] = "";
  char entity_3[12] = "";
  char* entity_0;
  memset(entity_8, 'W', 29-1);
  entity_8[29-1]='0';
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[0]='0';
  memset(entity_3, 'O', 12-1);
  entity_3[12-1]='0';
  strcpy(entity_0, entity_3);
}