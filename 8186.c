void fun()
{
  int entity_4 = 35;
  entity_4 = 48;
  char entity_8 = 'P';
  char entity_5[22] = "";
  entity_5 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[entity_4-1]='';
  memset(entity_5, 'u', 22-1);
  entity_5[22-1]='';
  strcpy(entity_0, entity_5);
}