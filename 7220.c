void fun()
{
  int entity_8 = 58;
  char* entity_1;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  memset(entity_7, 'M', entity_8-1);
  entity_7[entity_8-1]='';
  entity_1 = (char*)malloc(58*sizeof(char));
  entity_1[58-1]='';
  memcpy(entity_1, entity_7, entity_8*sizeof(char));
}