void fun()
{
  int entity_3 = 30;
  int entity_9 = 42;
  char entity_4[58] = "";
  entity_4 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[entity_9-1]='';
  memset(entity_4, 's', 58-1);
  entity_4[58-1]='';
  strcpy(entity_2, entity_4);
}