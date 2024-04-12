void fun()
{
  int entity_2 = 61;
  entity_2 = 61;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  char* entity_5;
  memset(entity_6, 'N', entity_2-1);
  entity_6[entity_2-1]='';
  entity_5 = (char*)malloc(14*sizeof(char));
  entity_5[14-1]='';
  strcpy(entity_5, entity_6);
}