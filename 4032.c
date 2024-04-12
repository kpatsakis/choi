void fun()
{
  int entity_1 = 39;
  int entity_9 = 12;
  char* entity_3;
  char entity_6[35] = "";
  entity_6 = NULL;
  memset(entity_6, 'w', 35-1);
  entity_6[35-1]='';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  entity_1 = 86;
  strcpy(entity_3, entity_6);
}