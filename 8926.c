void fun()
{
  int entity_2 = 18;
  entity_2 = 92;
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(98*sizeof(char));
  entity_5[98-1]='';
  memset(entity_8, 'M', entity_2-1);
  entity_8[entity_2-1]='';
  memcpy(entity_5, entity_8, entity_2*sizeof(char));
}