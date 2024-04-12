void fun()
{
  int entity_0 = 68;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(31*sizeof(char));
  entity_3[31-1]='';
  memset(entity_6, 'q', entity_0-1);
  entity_6[entity_0-1]='';
  strcpy(entity_3, entity_6);
}