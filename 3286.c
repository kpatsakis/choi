void fun()
{
  int entity_9 = 86;
  char entity_5[48] = "";
  entity_5 = NULL;
  char entity_4 = 's';
  char entity_1[42] = "";
  entity_1 = NULL;
  char* entity_8;
  memset(entity_5, 'p', 48-1);
  entity_5[48-1]='';
  memset(entity_1, 'Z', 42-1);
  entity_1[42-1]='';
  entity_8 = (char*)malloc(51*sizeof(char));
  entity_8[51-1]='';
  strcpy(entity_8, entity_1);
}