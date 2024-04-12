void fun()
{
  int entity_8 = 93;
  char* entity_0;
  char entity_5[10] = "";
  entity_5 = NULL;
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  memset(entity_5, 'I', 10-1);
  entity_5[10-1]='';
  entity_8 = 74;
  strcpy(entity_0, entity_5);
}