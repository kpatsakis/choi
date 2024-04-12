void fun()
{
  int entity_3 = 83;
  char* entity_7;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  memset(entity_5, 'K', entity_3-1);
  entity_5[entity_3-1]='';
  entity_7 = (char*)malloc(19*sizeof(char));
  entity_7[19-1]='';
  memcpy(entity_7, entity_5, entity_3*sizeof(char));
}