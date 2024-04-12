void fun()
{
  int entity_4 = 81;
  entity_4 = 81;
  char* entity_0;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  memset(entity_1, 'G', entity_4-1);
  entity_1[entity_4-1]='';
  entity_0 = (char*)malloc(13*sizeof(char));
  entity_0[13-1]='';
  strcpy(entity_0, entity_1);
}