void fun()
{
  int entity_0 = 64;
  entity_0 = 87;
  char entity_5[13] = "";
  entity_5 = NULL;
  char entity_8 = 'z';
  char entity_4[73] = "";
  entity_4 = NULL;
  char entity_3 = 'A';
  char* entity_1;
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  memset(entity_4, 'z', 73-1);
  entity_4[73-1]='';
  memset(entity_5, 'J', 13-1);
  entity_5[13-1]='';
  strcpy(entity_1, entity_5);
}