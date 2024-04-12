void fun()
{
  int entity_8 = 47;
  entity_8 = 57;
  char entity_4[12] = "";
  char* entity_0;
  memset(entity_4, 'l', 12-1);
  entity_4[12-1]='0';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_4, 12*sizeof(char));
}