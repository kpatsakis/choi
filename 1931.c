void fun()
{
  int entity_7 = 4;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  char* entity_2;
  memset(entity_0, 'V', entity_7-1);
  entity_0[entity_7-1]='';
  entity_2 = (char*)malloc(64*sizeof(char));
  entity_2[64-1]='';
  entity_7 = 90;
  memcpy(entity_2, entity_0, entity_7*sizeof(char));
}