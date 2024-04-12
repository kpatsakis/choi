void fun()
{
  int entity_5 = 31;
  char entity_6[21] = "";
  char* entity_0;
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[0]='0';
  memset(entity_6, 'T', 21-1);
  entity_6[21-1]='0';
  strcpy(entity_0, entity_6);
}