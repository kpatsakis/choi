void fun()
{
  int entity_0 = 49;
  char* entity_7;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  memset(entity_3, 'W', entity_0-1);
  entity_3[entity_0-1]='';
  entity_7 = (char*)malloc(50*sizeof(char));
  entity_7[50-1]='';
  strcpy(entity_7, entity_3);
}