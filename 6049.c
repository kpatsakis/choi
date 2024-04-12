void fun()
{
  int entity_1 = 57;
  entity_1 = 21;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(73*sizeof(char));
  entity_5[73-1]='';
  memset(entity_7, 'y', entity_1-1);
  entity_7[entity_1-1]='';
  memcpy(entity_5, entity_7, entity_1*sizeof(char));
}