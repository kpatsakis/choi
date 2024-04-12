void fun()
{
  int entity_4 = 33;
  entity_4 = 33;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char* entity_2;
  char entity_5[4] = "";
  entity_5 = NULL;
  entity_2 = (char*)malloc(70*sizeof(char));
  entity_2[70-1]='';
  memset(entity_5, 't', 4-1);
  entity_5[4-1]='';
  memset(entity_9, 'G', entity_4-1);
  entity_9[entity_4-1]='';
  strcpy(entity_2, entity_9);
}