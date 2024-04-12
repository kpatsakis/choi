void fun()
{
  int entity_7 = 76;
  char* entity_8;
  char entity_6[76] = "";
  memset(entity_6, 't', 76-1);
  entity_6[76-1]='0';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_6, 76*sizeof(char));
}