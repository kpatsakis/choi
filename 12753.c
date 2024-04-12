void fun()
{
  int entity_4 = 16;
  char entity_1[86] = "";
  char entity_7 = 'l';
  char* entity_0;
  memset(entity_1, 'j', 86-1);
  entity_1[86-1]='0';
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_1);
}