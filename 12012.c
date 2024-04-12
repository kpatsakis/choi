void fun()
{
  int entity_7 = 45;
  char* entity_3;
  char entity_0[36] = "";
  char entity_4[39] = "";
  memset(entity_0, 'a', 36-1);
  entity_0[36-1]='0';
  memset(entity_4, 'd', 39-1);
  entity_4[39-1]='0';
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_4);
}