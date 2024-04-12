void fun()
{
  int entity_1 = 22;
  char* entity_8;
  char entity_4[28] = "";
  char entity_0 = 'W';
  char* entity_6;
  entity_8 = (char*)malloc(45*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'T', 28-1);
  entity_4[28-1]='0';
  entity_6 = (char*)malloc(68*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_4);
}