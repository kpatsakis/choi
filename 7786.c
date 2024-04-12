void fun()
{
  int entity_3 = 17;
  char* entity_7;
  char entity_5[11] = "";
  entity_5 = NULL;
  memset(entity_5, 'v', 11-1);
  entity_5[11-1]='';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  entity_3 = 29;
  strcpy(entity_7, entity_5);
}