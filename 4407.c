void fun()
{
  int entity_7 = 76;
  char* entity_3;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  entity_3 = (char*)malloc(98*sizeof(char));
  entity_3[98-1]='';
  memset(entity_5, 'x', entity_7-1);
  entity_5[entity_7-1]='';
  entity_7 = 66;
  memcpy(entity_3, entity_5, entity_7*sizeof(char));
}