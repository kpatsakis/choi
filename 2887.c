void fun()
{
  int entity_9 = 80;
  char entity_3[24] = "";
  entity_3 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  memset(entity_3, 'a', 24-1);
  entity_3[24-1]='';
  entity_9 = 6;
  strcpy(entity_5, entity_3);
}