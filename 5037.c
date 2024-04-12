void fun()
{
  int entity_0 = 87;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  char* entity_7;
  char* entity_4;
  entity_4 = (char*)malloc(94*sizeof(char));
  entity_4[94-1]='';
  entity_7 = (char*)malloc(42*sizeof(char));
  entity_7[42-1]='';
  memset(entity_5, 'c', entity_0-1);
  entity_5[entity_0-1]='';
  entity_0 = 98;
  strcpy(entity_4, entity_5);
}