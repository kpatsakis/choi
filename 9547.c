void fun()
{
  int entity_6 = 36;
  char* entity_9;
  char entity_3[58] = "";
  entity_3 = NULL;
  memset(entity_3, 'j', 58-1);
  entity_3[58-1]='';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  entity_6 = 46;
  strcpy(entity_9, entity_3);
}