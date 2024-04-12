void fun()
{
  int entity_0 = 20;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  char* entity_7;
  char* entity_4;
  entity_7 = (char*)malloc(99*sizeof(char));
  entity_7[99-1]='';
  entity_4 = (char*)malloc(42*sizeof(char));
  entity_4[42-1]='';
  memset(entity_5, 'T', entity_0-1);
  entity_5[entity_0-1]='';
  strcpy(entity_4, entity_5);
}