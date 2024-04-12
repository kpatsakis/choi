void fun()
{
  int entity_9 = 16;
  char entity_8[76] = "";
  char* entity_0;
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[0]='0';
  memset(entity_8, 'h', 76-1);
  entity_8[76-1]='0';
  entity_9 = 43;
  strcpy(entity_0, entity_8);
}