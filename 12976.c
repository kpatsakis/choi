void fun()
{
  int entity_8 = 80;
  int entity_0 = 89;
  char* entity_4;
  char entity_6[41] = "";
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[0]='0';
  memset(entity_6, 'e', 41-1);
  entity_6[41-1]='0';
  strcpy(entity_4, entity_6);
}