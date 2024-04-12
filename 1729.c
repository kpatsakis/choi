void fun()
{
  int entity_8 = 78;
  int entity_5 = 69;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  char* entity_1;
  memset(entity_2, 'D', entity_8-1);
  entity_2[entity_8-1]='';
  entity_1 = (char*)malloc(98*sizeof(char));
  entity_1[98-1]='';
  entity_8 = 78;
  memcpy(entity_1, entity_2, entity_8*sizeof(char));
}