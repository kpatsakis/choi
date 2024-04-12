void fun()
{
  int entity_1 = 35;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(98*sizeof(char));
  entity_3[98-1]='';
  memset(entity_8, 'r', entity_1-1);
  entity_8[entity_1-1]='';
  entity_1 = 37;
  strcpy(entity_3, entity_8);
}