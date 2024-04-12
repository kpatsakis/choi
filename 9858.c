void fun()
{
  int entity_2 = 35;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  char* entity_5;
  memset(entity_4, 'b', entity_2-1);
  entity_4[entity_2-1]='';
  entity_5 = (char*)malloc(64*sizeof(char));
  entity_5[64-1]='';
  entity_2 = 100;
  strcpy(entity_5, entity_4);
}