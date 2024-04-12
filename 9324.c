void fun()
{
  int entity_4 = 98;
  char* entity_9;
  char entity_7[88] = "";
  entity_7 = NULL;
  memset(entity_7, 'F', 88-1);
  entity_7[88-1]='';
  entity_9 = (char*)malloc(91*sizeof(char));
  entity_9[91-1]='';
  strcpy(entity_9, entity_7);
}