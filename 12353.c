void fun()
{
  int entity_0 = 20;
  char entity_4[58] = "";
  char* entity_6;
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[0]='0';
  memset(entity_4, 'L', 58-1);
  entity_4[58-1]='0';
  strcpy(entity_6, entity_4);
}