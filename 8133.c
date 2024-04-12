void fun()
{
  int entity_1 = 10;
  char* entity_4;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  memset(entity_2, 'k', entity_1-1);
  entity_2[entity_1-1]='';
  entity_4 = (char*)malloc(20*sizeof(char));
  entity_4[20-1]='';
  strcpy(entity_4, entity_2);
}