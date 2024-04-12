void fun()
{
  int entity_5 = 81;
  char entity_4[83] = "";
  char* entity_6;
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[0]='0';
  memset(entity_4, 'k', 83-1);
  entity_4[83-1]='0';
  strcpy(entity_6, entity_4);
}