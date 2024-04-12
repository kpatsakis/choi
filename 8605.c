void fun()
{
  int entity_8 = 97;
  char* entity_5;
  char entity_7 = 'v';
  char* entity_9;
  char entity_4[97] = "";
  entity_4 = NULL;
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  entity_5 = (char*)malloc(21*sizeof(char));
  entity_5[21-1]='';
  memset(entity_4, 'k', 97-1);
  entity_4[97-1]='';
  entity_8 = 12;
  strcpy(entity_9, entity_4);
}