void fun()
{
  int entity_0 = 100;
  char* entity_3;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  entity_3 = (char*)malloc(24*sizeof(char));
  entity_3[24-1]='';
  memset(entity_6, 'k', entity_0-1);
  entity_6[entity_0-1]='';
  strcpy(entity_3, entity_6);
}