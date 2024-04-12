void fun()
{
  int entity_8 = 99;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  char* entity_2;
  memset(entity_9, 'I', entity_8-1);
  entity_9[entity_8-1]='';
  entity_2 = (char*)malloc(40*sizeof(char));
  entity_2[40-1]='';
  strcpy(entity_2, entity_9);
}