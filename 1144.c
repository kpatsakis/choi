void fun()
{
  int entity_2 = 10;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  char* entity_0;
  char* entity_1;
  memset(entity_6, 'p', entity_2-1);
  entity_6[entity_2-1]='';
  entity_1 = (char*)malloc(73*sizeof(char));
  entity_1[73-1]='';
  entity_0 = (char*)malloc(86*sizeof(char));
  entity_0[86-1]='';
  strcpy(entity_0, entity_6);
}