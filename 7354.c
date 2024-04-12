void fun()
{
  int entity_2 = 80;
  char* entity_5;
  char entity_6 = 'k';
  char entity_9[94] = "";
  entity_9 = NULL;
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  memset(entity_9, 'g', 94-1);
  entity_9[94-1]='';
  strcpy(entity_5, entity_9);
}