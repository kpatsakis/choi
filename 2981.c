void fun()
{
  int entity_5 = 94;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(74*sizeof(char));
  entity_1[74-1]='';
  memset(entity_2, 'u', entity_5-1);
  entity_2[entity_5-1]='';
  entity_5 = 69;
  memcpy(entity_1, entity_2, entity_5*sizeof(char));
}