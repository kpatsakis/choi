void fun()
{
  int entity_4 = 37;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  char* entity_8;
  memset(entity_3, 'k', entity_4-1);
  entity_3[entity_4-1]='';
  entity_8 = (char*)malloc(19*sizeof(char));
  entity_8[19-1]='';
  strcpy(entity_8, entity_3);
}