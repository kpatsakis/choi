void fun()
{
  int entity_1 = 89;
  entity_1 = 89;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(94*sizeof(char));
  entity_0[94-1]='';
  memset(entity_5, 'A', entity_1-1);
  entity_5[entity_1-1]='';
  strcpy(entity_0, entity_5);
}