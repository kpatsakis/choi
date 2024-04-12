void fun()
{
  int entity_9 = 83;
  char entity_3[57] = "";
  entity_3 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memset(entity_3, 'J', 57-1);
  entity_3[57-1]='';
  strcpy(entity_6, entity_3);
}