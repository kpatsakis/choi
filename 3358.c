void fun()
{
  int entity_7 = 5;
  int entity_3 = 51;
  char* entity_9;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  memset(entity_4, 'V', entity_3-1);
  entity_4[entity_3-1]='';
  entity_9 = (char*)malloc(44*sizeof(char));
  entity_9[44-1]='';
  entity_3 = 80;
  memcpy(entity_9, entity_4, entity_3*sizeof(char));
}