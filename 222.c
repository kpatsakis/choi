void fun()
{
  int entity_7 = 98;
  int entity_8 = 28;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  char* entity_9;
  memset(entity_3, 'L', entity_8-1);
  entity_3[entity_8-1]='';
  entity_9 = (char*)malloc(56*sizeof(char));
  entity_9[56-1]='';
  strcpy(entity_9, entity_3);
}