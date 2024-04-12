void fun()
{
  int entity_7 = 57;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char* entity_4;
  memset(entity_5, 'g', entity_7-1);
  entity_5[entity_7-1]='';
  entity_4 = (char*)malloc(66*sizeof(char));
  entity_4[66-1]='';
  strcpy(entity_4, entity_5);
}