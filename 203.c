void fun()
{
  int entity_0 = 59;
  char* entity_4;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  memset(entity_3, 'I', entity_0-1);
  entity_3[entity_0-1]='';
  entity_4 = (char*)malloc(6*sizeof(char));
  entity_4[6-1]='';
  entity_0 = 82;
  strcpy(entity_4, entity_3);
}