void fun()
{
  int entity_8 = 43;
  char* entity_3;
  char entity_1[79] = "";
  entity_1 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  memset(entity_1, 'S', 79-1);
  entity_1[79-1]='';
  entity_3 = (char*)malloc(39*sizeof(char));
  entity_3[39-1]='';
  strcpy(entity_0, entity_1);
}