void fun()
{
  int entity_5 = 15;
  char* entity_3;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  entity_3 = (char*)malloc(59*sizeof(char));
  entity_3[59-1]='';
  memset(entity_6, 'T', entity_5-1);
  entity_6[entity_5-1]='';
  memcpy(entity_3, entity_6, entity_5*sizeof(char));
}