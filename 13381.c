void fun()
{
  int entity_0 = 38;
  char entity_5[34] = "";
  char* entity_8;
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[0]='0';
  memset(entity_5, 't', 34-1);
  entity_5[34-1]='0';
  entity_0 = 80;
  memcpy(entity_8, entity_5, 34*sizeof(char));
}