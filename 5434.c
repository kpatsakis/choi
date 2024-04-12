void fun()
{
  int entity_5 = 46;
  char* entity_1;
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  char entity_0 = 'p';
  entity_1 = (char*)malloc(75*sizeof(char));
  entity_1[75-1]='';
  memset(entity_4, 'j', entity_5-1);
  entity_4[entity_5-1]='';
  strcpy(entity_1, entity_4);
}