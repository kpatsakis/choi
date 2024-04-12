void fun()
{
  int entity_6 = 22;
  int entity_3 = 33;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  char* entity_1;
  char* entity_5;
  memset(entity_0, 'M', entity_3-1);
  entity_0[entity_3-1]='';
  entity_1 = (char*)malloc(43*sizeof(char));
  entity_1[43-1]='';
  entity_5 = (char*)malloc(23*sizeof(char));
  entity_5[23-1]='';
  strcpy(entity_5, entity_0);
}