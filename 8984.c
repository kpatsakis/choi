void fun()
{
  int entity_2 = 90;
  char* entity_9;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  char entity_1[60] = "";
  entity_1 = NULL;
  memset(entity_1, 'U', 60-1);
  entity_1[60-1]='';
  entity_9 = (char*)malloc(16*sizeof(char));
  entity_9[16-1]='';
  memset(entity_3, 'i', entity_2-1);
  entity_3[entity_2-1]='';
  entity_2 = 83;
  strcpy(entity_9, entity_3);
}