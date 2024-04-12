void fun()
{
  int entity_4 = 70;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(95*sizeof(char));
  entity_9[95-1]='';
  memset(entity_2, 'P', entity_4-1);
  entity_2[entity_4-1]='';
  entity_4 = 14;
  strcpy(entity_9, entity_2);
}