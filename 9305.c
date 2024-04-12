void fun()
{
  int entity_2 = 76;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  char* entity_1;
  memset(entity_6, 'x', entity_2-1);
  entity_6[entity_2-1]='';
  entity_1 = (char*)malloc(98*sizeof(char));
  entity_1[98-1]='';
  memcpy(entity_1, entity_6, entity_2*sizeof(char));
}