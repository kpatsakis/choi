void fun()
{
  int entity_2 = 80;
  entity_2 = 80;
  char* entity_3;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  memset(entity_4, 'B', entity_2-1);
  entity_4[entity_2-1]='';
  entity_3 = (char*)malloc(5*sizeof(char));
  entity_3[5-1]='';
  strcpy(entity_3, entity_4);
}