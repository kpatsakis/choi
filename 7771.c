void fun()
{
  int entity_8 = 68;
  char* entity_3;
  char entity_7 = 'n';
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  memset(entity_9, 'j', entity_8-1);
  entity_9[entity_8-1]='';
  entity_3 = (char*)malloc(34*sizeof(char));
  entity_3[34-1]='';
  strcpy(entity_3, entity_9);
}