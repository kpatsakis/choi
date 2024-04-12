void fun()
{
  int entity_0 = 63;
  entity_0 = 22;
  char* entity_5;
  char entity_6[89] = "";
  memset(entity_6, 'y', 89-1);
  entity_6[89-1]='0';
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_6);
}