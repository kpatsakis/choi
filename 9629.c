void fun()
{
  int entity_9 = 37;
  char* entity_2;
  char entity_5[47] = "";
  entity_5 = NULL;
  char entity_7[25] = "";
  entity_7 = NULL;
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[entity_9-1]='';
  memset(entity_5, 'j', 47-1);
  entity_5[47-1]='';
  memset(entity_7, 'P', 25-1);
  entity_7[25-1]='';
  strcpy(entity_2, entity_5);
}