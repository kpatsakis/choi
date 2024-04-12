void fun()
{
  int entity_0 = 52;
  entity_0 = 8;
  char* entity_6;
  char entity_5[1] = "";
  char entity_2 = 'f';
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[0]='0';
  memset(entity_5, 'c', 1-1);
  entity_5[1-1]='0';
  strcpy(entity_6, entity_5);
}