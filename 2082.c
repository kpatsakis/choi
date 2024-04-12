void fun()
{
  int entity_7 = 44;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(24*sizeof(char));
  entity_5[24-1]='';
  memset(entity_8, 'q', entity_7-1);
  entity_8[entity_7-1]='';
  strcpy(entity_5, entity_8);
}