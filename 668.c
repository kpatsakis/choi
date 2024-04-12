void fun()
{
  int entity_4 = 88;
  char* entity_6;
  char entity_1[28] = "";
  entity_1 = NULL;
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  memset(entity_1, 'j', 28-1);
  entity_1[28-1]='';
  entity_4 = 59;
  strcpy(entity_6, entity_1);
}