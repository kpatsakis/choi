void fun()
{
  int entity_0 = 2;
  char entity_2[33] = "";
  entity_2 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  memset(entity_2, 'D', 33-1);
  entity_2[33-1]='';
  strcpy(entity_1, entity_2);
}