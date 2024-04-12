void fun()
{
  int entity_6 = 12;
  char entity_9[67] = "";
  entity_9 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(91*sizeof(char));
  entity_1[91-1]='';
  memset(entity_9, 'Y', 67-1);
  entity_9[67-1]='';
  strcpy(entity_1, entity_9);
}