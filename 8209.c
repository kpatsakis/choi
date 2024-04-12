void fun()
{
  int entity_4 = 34;
  char entity_9[77] = "";
  entity_9 = NULL;
  char* entity_2;
  char entity_5[1] = "";
  entity_5 = NULL;
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memset(entity_5, 'C', 1-1);
  entity_5[1-1]='';
  memset(entity_9, 't', 77-1);
  entity_9[77-1]='';
  entity_4 = 74;
  strcpy(entity_2, entity_9);
}