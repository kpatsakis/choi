void fun()
{
  int entity_3 = 47;
  int entity_7 = 2;
  int entity_8 = 39;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(96*sizeof(char));
  entity_1[96-1]='';
  memset(entity_5, 'd', entity_8-1);
  entity_5[entity_8-1]='';
  strcpy(entity_1, entity_5);
}