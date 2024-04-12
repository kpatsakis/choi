void fun()
{
  int entity_7 = 57;
  entity_7 = 1;
  char* entity_8;
  char entity_3[81] = "";
  entity_3 = NULL;
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  memset(entity_3, 'j', 81-1);
  entity_3[81-1]='';
  strcpy(entity_8, entity_3);
}