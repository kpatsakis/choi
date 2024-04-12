void fun()
{
  int entity_9 = 47;
  int entity_5 = 52;
  char entity_8[96] = "";
  entity_8 = NULL;
  char* entity_3;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  memset(entity_8, 'u', 96-1);
  entity_8[96-1]='';
  entity_3 = (char*)malloc(76*sizeof(char));
  entity_3[76-1]='';
  memset(entity_1, 'L', entity_5-1);
  entity_1[entity_5-1]='';
  strcpy(entity_3, entity_1);
}