void fun()
{
  int entity_4 = 36;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_2, 'c', entity_4-1);
  entity_2[entity_4-1]='';
  entity_3 = (char*)malloc(89*sizeof(char));
  entity_3[89-1]='';
  strcpy(entity_3, entity_2);
}