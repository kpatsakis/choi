void fun()
{
  int entity_2 = 56;
  entity_2 = 56;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  char* entity_7;
  memset(entity_5, 'C', entity_2-1);
  entity_5[entity_2-1]='';
  entity_7 = (char*)malloc(28*sizeof(char));
  entity_7[28-1]='';
  strcpy(entity_7, entity_5);
}