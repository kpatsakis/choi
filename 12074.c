void fun()
{
  int entity_8 = 39;
  char* entity_5;
  char entity_4[39] = "";
  memset(entity_4, 'R', 39-1);
  entity_4[39-1]='0';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_4);
}