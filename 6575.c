void fun()
{
  int entity_9 = 56;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(71*sizeof(char));
  entity_2[71-1]='';
  memset(entity_4, 'o', entity_9-1);
  entity_4[entity_9-1]='';
  entity_9 = 52;
  strcpy(entity_2, entity_4);
}