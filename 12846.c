void fun()
{
  int entity_3 = 33;
  char entity_4[76] = "";
  char* entity_8;
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'f', 76-1);
  entity_4[76-1]='0';
  strcpy(entity_8, entity_4);
}