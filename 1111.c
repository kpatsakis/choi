void fun()
{
  int entity_7 = 49;
  char* entity_9;
  char entity_3[19] = "";
  entity_3 = NULL;
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[entity_7-1]='';
  memset(entity_3, 'j', 19-1);
  entity_3[19-1]='';
  strcpy(entity_9, entity_3);
}