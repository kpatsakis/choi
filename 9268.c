void fun()
{
  int entity_1 = 69;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  char* entity_2;
  memset(entity_7, 'P', entity_1-1);
  entity_7[entity_1-1]='';
  entity_2 = (char*)malloc(69*sizeof(char));
  entity_2[69-1]='';
  strcpy(entity_2, entity_7);
}