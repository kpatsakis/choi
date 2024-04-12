void fun()
{
  int entity_0 = 96;
  int entity_8 = 77;
  int entity_6 = 46;
  entity_8 = 47;
  char* entity_3;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  char entity_9 = 'n';
  entity_3 = (char*)malloc(74*sizeof(char));
  entity_3[74-1]='';
  memset(entity_5, 'u', entity_8-1);
  entity_5[entity_8-1]='';
  memcpy(entity_3, entity_5, entity_8*sizeof(char));
}