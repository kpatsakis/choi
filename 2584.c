void fun()
{
  int entity_6 = 57;
  char entity_4[58] = "";
  entity_4 = NULL;
  char* entity_3;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  memset(entity_4, 'y', 58-1);
  entity_4[58-1]='';
  entity_3 = (char*)malloc(47*sizeof(char));
  entity_3[47-1]='';
  memset(entity_9, 'w', entity_6-1);
  entity_9[entity_6-1]='';
  strcpy(entity_3, entity_9);
}