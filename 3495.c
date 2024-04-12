void fun()
{
  int entity_3 = 61;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(18*sizeof(char));
  entity_2[18-1]='';
  memset(entity_5, 'l', entity_3-1);
  entity_5[entity_3-1]='';
  memcpy(entity_2, entity_5, entity_3*sizeof(char));
}