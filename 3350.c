void fun()
{
  int entity_0 = 61;
  entity_0 = 61;
  char* entity_6;
  char entity_8 = 'i';
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  entity_6 = (char*)malloc(18*sizeof(char));
  entity_6[18-1]='';
  memset(entity_5, 'k', entity_0-1);
  entity_5[entity_0-1]='';
  strcpy(entity_6, entity_5);
}