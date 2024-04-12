void fun()
{
  int entity_7 = 52;
  int entity_8 = 24;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(21*sizeof(char));
  entity_5[21-1]='';
  memset(entity_1, 'j', entity_8-1);
  entity_1[entity_8-1]='';
  entity_8 = 58;
  memcpy(entity_5, entity_1, entity_8*sizeof(char));
}