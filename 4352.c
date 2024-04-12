void fun()
{
  int entity_8 = 78;
  char* entity_4;
  char entity_3[58] = "";
  entity_3 = NULL;
  memset(entity_3, 'U', 58-1);
  entity_3[58-1]='';
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  strcpy(entity_4, entity_3);
}