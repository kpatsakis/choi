void fun()
{
  int entity_3 = 11;
  char entity_4[95] = "";
  entity_4 = NULL;
  char* entity_5;
  memset(entity_4, 'a', 95-1);
  entity_4[95-1]='';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  memcpy(entity_5, entity_4, 95*sizeof(char));
}