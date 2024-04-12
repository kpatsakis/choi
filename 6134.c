void fun()
{
  int entity_5 = 15;
  char* entity_3;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  memset(entity_2, 'E', entity_5-1);
  entity_2[entity_5-1]='';
  entity_3 = (char*)malloc(89*sizeof(char));
  entity_3[89-1]='';
  strcpy(entity_3, entity_2);
}