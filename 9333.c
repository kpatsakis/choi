void fun()
{
  int entity_4 = 39;
  char* entity_1;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  memset(entity_2, 'T', entity_4-1);
  entity_2[entity_4-1]='';
  entity_1 = (char*)malloc(78*sizeof(char));
  entity_1[78-1]='';
  entity_4 = 47;
  strcpy(entity_1, entity_2);
}