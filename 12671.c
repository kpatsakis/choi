void fun()
{
  int entity_7 = 50;
  char entity_5[73] = "";
  char* entity_0;
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[0]='0';
  memset(entity_5, 's', 73-1);
  entity_5[73-1]='0';
  strcpy(entity_0, entity_5);
}