void fun()
{
  int entity_9 = 63;
  char* entity_3;
  char entity_5[9] = "";
  entity_5 = NULL;
  entity_3 = (char*)malloc(44*sizeof(char));
  entity_3[44-1]='';
  memset(entity_5, 'U', 9-1);
  entity_5[9-1]='';
  strcpy(entity_3, entity_5);
}