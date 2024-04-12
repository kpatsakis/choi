void fun()
{
  int entity_5 = 60;
  entity_5 = 66;
  char* entity_0;
  char entity_7[73] = "";
  char entity_3[39] = "";
  memset(entity_7, 'I', 73-1);
  entity_7[73-1]='0';
  memset(entity_3, 'i', 39-1);
  entity_3[39-1]='0';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_7, 73*sizeof(char));
}