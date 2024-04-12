void fun()
{
  int entity_2 = 72;
  char* entity_1;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  memset(entity_7, 'n', entity_2-1);
  entity_7[entity_2-1]='';
  entity_1 = (char*)malloc(79*sizeof(char));
  entity_1[79-1]='';
  entity_2 = 36;
  strcpy(entity_1, entity_7);
}