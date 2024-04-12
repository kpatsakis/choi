void fun()
{
  int entity_3 = 57;
  entity_3 = 57;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(42*sizeof(char));
  entity_9[42-1]='';
  memset(entity_6, 's', entity_3-1);
  entity_6[entity_3-1]='';
  strcpy(entity_9, entity_6);
}