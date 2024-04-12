void fun()
{
  int entity_4 = 5;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(74*sizeof(char));
  entity_0[74-1]='';
  memset(entity_7, 'Z', entity_4-1);
  entity_7[entity_4-1]='';
  memcpy(entity_0, entity_7, entity_4*sizeof(char));
}