void fun()
{
  int entity_3 = 14;
  int entity_7 = 37;
  entity_3 = 50;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  char* entity_9;
  memset(entity_8, 'M', entity_3-1);
  entity_8[entity_3-1]='';
  entity_9 = (char*)malloc(74*sizeof(char));
  entity_9[74-1]='';
  memcpy(entity_9, entity_8, entity_3*sizeof(char));
}