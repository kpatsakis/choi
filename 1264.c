void fun()
{
  int entity_3 = 35;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  char* entity_1;
  memset(entity_2, 'k', entity_3-1);
  entity_2[entity_3-1]='';
  entity_1 = (char*)malloc(8*sizeof(char));
  entity_1[8-1]='';
  strcpy(entity_1, entity_2);
}