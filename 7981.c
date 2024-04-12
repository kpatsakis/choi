void fun()
{
  int entity_2 = 56;
  char* entity_5;
  char entity_0[38] = "";
  entity_0 = NULL;
  char* entity_4;
  memset(entity_0, 'K', 38-1);
  entity_0[38-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  entity_4 = (char*)malloc(93*sizeof(char));
  entity_4[93-1]='';
  entity_2 = 87;
  strcpy(entity_5, entity_0);
}