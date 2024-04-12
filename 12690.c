void fun()
{
  int entity_0 = 24;
  char entity_7[8] = "";
  char* entity_4;
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[0]='0';
  memset(entity_7, 'M', 8-1);
  entity_7[8-1]='0';
  strcpy(entity_4, entity_7);
}