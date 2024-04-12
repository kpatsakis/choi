void fun()
{
  int entity_9 = 56;
  char entity_3 = 'e';
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  char* entity_4;
  char entity_5 = 'M';
  entity_4 = (char*)malloc(31*sizeof(char));
  entity_4[31-1]='';
  memset(entity_7, 'v', entity_9-1);
  entity_7[entity_9-1]='';
  entity_9 = 98;
  strcpy(entity_4, entity_7);
}