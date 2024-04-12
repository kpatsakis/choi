void fun()
{
  int entity_8 = 44;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(42*sizeof(char));
  entity_3[42-1]='';
  memset(entity_9, 'z', entity_8-1);
  entity_9[entity_8-1]='';
  strcpy(entity_3, entity_9);
}