void fun()
{
  int entity_1 = 60;
  entity_1 = 60;
  char* entity_9;
  char entity_6 = 'D';
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  memset(entity_3, 'Q', entity_1-1);
  entity_3[entity_1-1]='';
  entity_9 = (char*)malloc(19*sizeof(char));
  entity_9[19-1]='';
  strcpy(entity_9, entity_3);
}