void fun()
{
  int entity_8 = 22;
  char* entity_3;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  entity_3 = (char*)malloc(19*sizeof(char));
  entity_3[19-1]='';
  memset(entity_5, 'S', entity_8-1);
  entity_5[entity_8-1]='';
  strcpy(entity_3, entity_5);
}