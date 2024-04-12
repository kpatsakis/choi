void fun()
{
  int entity_9 = 66;
  char* entity_1;
  char entity_5[10] = "";
  entity_5 = NULL;
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[entity_9-1]='';
  memset(entity_5, 'r', 10-1);
  entity_5[10-1]='';
  strcpy(entity_1, entity_5);
}