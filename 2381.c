void fun()
{
  int entity_8 = 18;
  char entity_2 = 'M';
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(8*sizeof(char));
  entity_3[8-1]='';
  memset(entity_5, 'Q', entity_8-1);
  entity_5[entity_8-1]='';
  entity_8 = 39;
  memcpy(entity_3, entity_5, entity_8*sizeof(char));
}