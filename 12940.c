void fun()
{
  int entity_4 = 22;
  char entity_5[52] = "";
  char* entity_0;
  char entity_8 = 'X';
  memset(entity_5, 'y', 52-1);
  entity_5[52-1]='0';
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_5);
}