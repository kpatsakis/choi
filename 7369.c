void fun()
{
  int entity_7 = 8;
  char entity_3 = 'k';
  char* entity_6;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  memset(entity_0, 'B', entity_7-1);
  entity_0[entity_7-1]='';
  entity_6 = (char*)malloc(73*sizeof(char));
  entity_6[73-1]='';
  strcpy(entity_6, entity_0);
}