void fun()
{
  int entity_9 = 19;
  entity_9 = 76;
  char entity_2[10] = "";
  entity_2 = NULL;
  char entity_0 = 'P';
  char* entity_1;
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[entity_9-1]='';
  memset(entity_2, 'b', 10-1);
  entity_2[10-1]='';
  strcpy(entity_1, entity_2);
}