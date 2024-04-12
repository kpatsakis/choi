void fun()
{
  int entity_6 = 36;
  entity_6 = 36;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  char* entity_3;
  memset(entity_1, 'j', entity_6-1);
  entity_1[entity_6-1]='';
  entity_3 = (char*)malloc(95*sizeof(char));
  entity_3[95-1]='';
  strcpy(entity_3, entity_1);
}