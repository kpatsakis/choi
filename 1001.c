void fun()
{
  int entity_4 = 49;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(64*sizeof(char));
  entity_3[64-1]='';
  memset(entity_6, 'N', entity_4-1);
  entity_6[entity_4-1]='';
  memcpy(entity_3, entity_6, entity_4*sizeof(char));
}