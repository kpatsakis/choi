void fun()
{
  int entity_3 = 9;
  char* entity_5;
  char entity_7[39] = "";
  memset(entity_7, 'f', 39-1);
  entity_7[39-1]='0';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[0]='0';
  entity_3 = 73;
  strcpy(entity_5, entity_7);
}