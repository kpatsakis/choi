void fun()
{
  int entity_6 = 66;
  char* entity_2;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  memset(entity_5, 'h', entity_6-1);
  entity_5[entity_6-1]='';
  entity_2 = (char*)malloc(81*sizeof(char));
  entity_2[81-1]='';
  memcpy(entity_2, entity_5, entity_6*sizeof(char));
}