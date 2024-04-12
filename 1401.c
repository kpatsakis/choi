void fun()
{
  int entity_7 = 55;
  entity_7 = 71;
  char* entity_3;
  char entity_9[85] = "";
  entity_9 = NULL;
  memset(entity_9, 'z', 85-1);
  entity_9[85-1]='';
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[entity_7-1]='';
  strcpy(entity_3, entity_9);
}