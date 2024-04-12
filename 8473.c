void fun()
{
  int entity_7 = 90;
  int entity_4 = 13;
  int entity_3 = 90;
  char entity_5[36] = "";
  entity_5 = NULL;
  char* entity_9;
  memset(entity_5, 'r', 36-1);
  entity_5[36-1]='';
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[entity_7-1]='';
  entity_7 = 79;
  strcpy(entity_9, entity_5);
}