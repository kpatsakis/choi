void fun()
{
  int entity_7 = 17;
  int entity_5 = 86;
  char entity_0[60] = "";
  char* entity_4;
  memset(entity_0, 'i', 60-1);
  entity_0[60-1]='0';
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[0]='0';
  entity_5 = 34;
  strcpy(entity_4, entity_0);
}