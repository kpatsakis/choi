void fun()
{
  int entity_0 = 47;
  int entity_4 = 33;
  entity_0 = 31;
  char entity_6[38] = "";
  char entity_7[97] = "";
  char* entity_5;
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[0]='0';
  memset(entity_6, 'K', 38-1);
  entity_6[38-1]='0';
  memset(entity_7, 'z', 97-1);
  entity_7[97-1]='0';
  strcpy(entity_5, entity_7);
}