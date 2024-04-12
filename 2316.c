void fun()
{
  int entity_4 = 72;
  char* entity_8;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  char entity_7 = 'U';
  entity_8 = (char*)malloc(1*sizeof(char));
  entity_8[1-1]='';
  memset(entity_3, 'm', entity_4-1);
  entity_3[entity_4-1]='';
  strcpy(entity_8, entity_3);
}