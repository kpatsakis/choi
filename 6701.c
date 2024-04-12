void fun()
{
  int entity_8 = 62;
  char entity_1[28] = "";
  entity_1 = NULL;
  char* entity_5;
  char* entity_0;
  char entity_7 = 'M';
  memset(entity_1, 'd', 28-1);
  entity_1[28-1]='';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  entity_5 = (char*)malloc(73*sizeof(char));
  entity_5[73-1]='';
  strcpy(entity_0, entity_1);
}