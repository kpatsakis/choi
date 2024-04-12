void fun()
{
  int entity_6 = 23;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  char* entity_9;
  char* entity_0;
  memset(entity_2, 'j', entity_6-1);
  entity_2[entity_6-1]='';
  entity_9 = (char*)malloc(97*sizeof(char));
  entity_9[97-1]='';
  entity_0 = (char*)malloc(6*sizeof(char));
  entity_0[6-1]='';
  strcpy(entity_0, entity_2);
}