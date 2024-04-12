void fun()
{
  int entity_6 = 45;
  char* entity_2;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  entity_2 = (char*)malloc(71*sizeof(char));
  entity_2[71-1]='';
  memset(entity_9, 'Q', entity_6-1);
  entity_9[entity_6-1]='';
  strcpy(entity_2, entity_9);
}