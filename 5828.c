void fun()
{
  int entity_7 = 21;
  char* entity_0;
  char* entity_6;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  entity_6 = (char*)malloc(35*sizeof(char));
  entity_6[35-1]='';
  memset(entity_3, 'n', entity_7-1);
  entity_3[entity_7-1]='';
  entity_0 = (char*)malloc(93*sizeof(char));
  entity_0[93-1]='';
  strcpy(entity_6, entity_3);
}