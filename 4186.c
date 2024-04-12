void fun()
{
  int entity_0 = 52;
  char entity_1[4] = "";
  entity_1 = NULL;
  char entity_9 = 'f';
  char* entity_3;
  memset(entity_1, 's', 4-1);
  entity_1[4-1]='';
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  strcpy(entity_3, entity_1);
}