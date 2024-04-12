void fun()
{
  int entity_9 = 88;
  char* entity_7;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  entity_7 = (char*)malloc(43*sizeof(char));
  entity_7[43-1]='';
  memset(entity_3, 'B', entity_9-1);
  entity_3[entity_9-1]='';
  strcpy(entity_7, entity_3);
}