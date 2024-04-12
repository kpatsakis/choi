void fun()
{
  int entity_4 = 77;
  int entity_3 = 9;
  char* entity_5;
  char* entity_0;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  memset(entity_1, 'k', entity_4-1);
  entity_1[entity_4-1]='';
  entity_5 = (char*)malloc(13*sizeof(char));
  entity_5[13-1]='';
  entity_0 = (char*)malloc(93*sizeof(char));
  entity_0[93-1]='';
  strcpy(entity_0, entity_1);
}