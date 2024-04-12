void fun()
{
  int entity_7 = 86;
  entity_7 = 17;
  char entity_6[73] = "";
  char* entity_5;
  memset(entity_6, 'y', 73-1);
  entity_6[73-1]='0';
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_6);
}