void fun()
{
  int entity_8 = 91;
  char* entity_2;
  char entity_3[8] = "";
  entity_3 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  entity_2 = (char*)malloc(97*sizeof(char));
  entity_2[97-1]='';
  memset(entity_3, 'n', 8-1);
  entity_3[8-1]='';
  entity_8 = 43;
  strcpy(entity_9, entity_3);
}