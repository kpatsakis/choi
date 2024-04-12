void fun()
{
  int entity_8 = 19;
  char* entity_0;
  char entity_6[8] = "";
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[0]='0';
  memset(entity_6, 'i', 8-1);
  entity_6[8-1]='0';
  entity_8 = 97;
  memcpy(entity_0, entity_6, 8*sizeof(char));
}