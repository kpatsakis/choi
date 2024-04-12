void fun()
{
  int entity_7 = 83;
  char entity_9 = 't';
  char* entity_3;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  entity_3 = (char*)malloc(2*sizeof(char));
  entity_3[2-1]='';
  memset(entity_5, 'F', entity_7-1);
  entity_5[entity_7-1]='';
  strcpy(entity_3, entity_5);
}