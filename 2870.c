void fun()
{
  int entity_9 = 48;
  entity_9 = 95;
  char* entity_7;
  char entity_6[90] = "";
  entity_6 = NULL;
  memset(entity_6, 'i', 90-1);
  entity_6[90-1]='';
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  strcpy(entity_7, entity_6);
}