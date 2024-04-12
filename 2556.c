void fun()
{
  int entity_7 = 45;
  char* entity_1;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  memset(entity_8, 'V', entity_7-1);
  entity_8[entity_7-1]='';
  entity_1 = (char*)malloc(95*sizeof(char));
  entity_1[95-1]='';
  strcpy(entity_1, entity_8);
}