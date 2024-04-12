void fun()
{
  int entity_0 = 71;
  char entity_8[80] = "";
  char* entity_6;
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[0]='0';
  memset(entity_8, 'p', 80-1);
  entity_8[80-1]='0';
  memcpy(entity_6, entity_8, 80*sizeof(char));
}