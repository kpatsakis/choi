void fun()
{
  int entity_9 = 17;
  int entity_8 = 61;
  entity_8 = 57;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(15*sizeof(char));
  entity_7[15-1]='';
  memset(entity_5, 'w', entity_8-1);
  entity_5[entity_8-1]='';
  memcpy(entity_7, entity_5, entity_8*sizeof(char));
}