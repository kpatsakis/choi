void fun()
{
  int entity_9 = 49;
  char* entity_6;
  char entity_3[37] = "";
  entity_3 = NULL;
  memset(entity_3, 'L', 37-1);
  entity_3[37-1]='';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  strcpy(entity_6, entity_3);
}