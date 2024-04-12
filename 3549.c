void fun()
{
  int entity_0 = 36;
  char entity_1[7] = "";
  entity_1 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[entity_0-1]='';
  memset(entity_1, 'e', 7-1);
  entity_1[7-1]='';
  strcpy(entity_4, entity_1);
}