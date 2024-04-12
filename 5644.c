void fun()
{
  int entity_9 = 44;
  char entity_5[59] = "";
  entity_5 = NULL;
  char* entity_7;
  memset(entity_5, 'w', 59-1);
  entity_5[59-1]='';
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  strcpy(entity_7, entity_5);
}