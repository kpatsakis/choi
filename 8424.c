void fun()
{
  int entity_1 = 88;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char* entity_5;
  memset(entity_2, 'b', entity_1-1);
  entity_2[entity_1-1]='';
  entity_5 = (char*)malloc(59*sizeof(char));
  entity_5[59-1]='';
  entity_1 = 51;
  strcpy(entity_5, entity_2);
}