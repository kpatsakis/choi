void fun()
{
  int entity_1 = 47;
  char* entity_5;
  char entity_7[54] = "";
  entity_7 = NULL;
  memset(entity_7, 'y', 54-1);
  entity_7[54-1]='';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  strcpy(entity_5, entity_7);
}