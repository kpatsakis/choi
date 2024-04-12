void fun()
{
  int entity_7 = 64;
  char entity_1[84] = "";
  entity_1 = NULL;
  char* entity_6;
  char entity_9 = 'F';
  char entity_8[33] = "";
  entity_8 = NULL;
  memset(entity_8, 'H', 33-1);
  entity_8[33-1]='';
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[entity_7-1]='';
  memset(entity_1, 'Z', 84-1);
  entity_1[84-1]='';
  strcpy(entity_6, entity_8);
}