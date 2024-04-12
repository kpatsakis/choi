void fun()
{
  int entity_6 = 73;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  char* entity_0;
  char* entity_9;
  entity_0 = (char*)malloc(57*sizeof(char));
  entity_0[57-1]='';
  entity_9 = (char*)malloc(97*sizeof(char));
  entity_9[97-1]='';
  memset(entity_2, 'L', entity_6-1);
  entity_2[entity_6-1]='';
  strcpy(entity_0, entity_2);
}