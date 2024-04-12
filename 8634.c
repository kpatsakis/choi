void fun()
{
  int entity_7 = 56;
  char entity_4 = 'U';
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  char* entity_0;
  char* entity_9;
  memset(entity_3, 'X', entity_7-1);
  entity_3[entity_7-1]='';
  entity_9 = (char*)malloc(48*sizeof(char));
  entity_9[48-1]='';
  entity_0 = (char*)malloc(97*sizeof(char));
  entity_0[97-1]='';
  entity_7 = 3;
  strcpy(entity_0, entity_3);
}