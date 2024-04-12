void fun()
{
  int entity_6 = 20;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(96*sizeof(char));
  entity_8[96-1]='';
  memset(entity_5, 'M', entity_6-1);
  entity_5[entity_6-1]='';
  entity_6 = 41;
  strcpy(entity_8, entity_5);
}