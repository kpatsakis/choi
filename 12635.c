void fun()
{
  int entity_5 = 39;
  char* entity_4;
  char entity_0[9] = "";
  memset(entity_0, 'b', 9-1);
  entity_0[9-1]='0';
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_0);
}