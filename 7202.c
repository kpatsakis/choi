void fun()
{
  int entity_8 = 77;
  int entity_9 = 48;
  char* entity_0;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char entity_3[58] = "";
  entity_3 = NULL;
  memset(entity_3, 'v', 58-1);
  entity_3[58-1]='';
  entity_0 = (char*)malloc(14*sizeof(char));
  entity_0[14-1]='';
  memset(entity_6, 'M', entity_8-1);
  entity_6[entity_8-1]='';
  strcpy(entity_0, entity_6);
}