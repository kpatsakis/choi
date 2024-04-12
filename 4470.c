void fun()
{
  int entity_0 = 34;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(18*sizeof(char));
  entity_1[18-1]='';
  memset(entity_6, 'v', entity_0-1);
  entity_6[entity_0-1]='';
  strcpy(entity_1, entity_6);
}