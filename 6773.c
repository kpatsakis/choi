void fun()
{
  int entity_2 = 94;
  char entity_6[56] = "";
  entity_6 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  memset(entity_6, 'w', 56-1);
  entity_6[56-1]='';
  strcpy(entity_9, entity_6);
}