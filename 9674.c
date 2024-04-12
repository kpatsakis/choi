void fun()
{
  int entity_3 = 1;
  char entity_6[17] = "";
  entity_6 = NULL;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  char* entity_0;
  memset(entity_7, 'E', entity_3-1);
  entity_7[entity_3-1]='';
  entity_0 = (char*)malloc(36*sizeof(char));
  entity_0[36-1]='';
  memset(entity_6, 'D', 17-1);
  entity_6[17-1]='';
  entity_3 = 99;
  strcpy(entity_0, entity_7);
}