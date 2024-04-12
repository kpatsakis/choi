void fun()
{
  int entity_0 = 80;
  char* entity_5;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  entity_5 = (char*)malloc(59*sizeof(char));
  entity_5[59-1]='';
  memset(entity_6, 'i', entity_0-1);
  entity_6[entity_0-1]='';
  strcpy(entity_5, entity_6);
}