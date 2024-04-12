void fun()
{
  int entity_9 = 21;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  char* entity_0;
  char* entity_7;
  memset(entity_2, 'i', entity_9-1);
  entity_2[entity_9-1]='';
  entity_7 = (char*)malloc(6*sizeof(char));
  entity_7[6-1]='';
  entity_0 = (char*)malloc(8*sizeof(char));
  entity_0[8-1]='';
  strcpy(entity_0, entity_2);
}