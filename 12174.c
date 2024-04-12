void fun()
{
  int entity_4 = 71;
  char* entity_1;
  char entity_0[31] = "";
  char* entity_8;
  entity_1 = (char*)malloc(62*sizeof(char));
  entity_1[0]='0';
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[0]='0';
  memset(entity_0, 'I', 31-1);
  entity_0[31-1]='0';
  strcpy(entity_8, entity_0);
}