void fun()
{
  int entity_7 = 91;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(56*sizeof(char));
  entity_9[56-1]='';
  memset(entity_6, 'g', entity_7-1);
  entity_6[entity_7-1]='';
  strcpy(entity_9, entity_6);
}