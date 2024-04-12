void fun()
{
  int entity_8 = 45;
  int entity_3 = 56;
  char* entity_4;
  char entity_6[46] = "";
  char* entity_0;
  memset(entity_6, 'c', 46-1);
  entity_6[46-1]='0';
  entity_4 = (char*)malloc(49*sizeof(char));
  entity_4[0]='0';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_6, 46*sizeof(char));
}