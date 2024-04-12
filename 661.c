void fun()
{
  int entity_1 = 12;
  entity_1 = 52;
  char* entity_5;
  char entity_6[58] = "";
  entity_6 = NULL;
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  memset(entity_6, 'j', 58-1);
  entity_6[58-1]='';
  strcpy(entity_5, entity_6);
}