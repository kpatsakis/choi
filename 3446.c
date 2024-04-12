void fun()
{
  int entity_5 = 13;
  int entity_4 = 97;
  char* entity_6;
  char entity_1[94] = "";
  entity_1 = NULL;
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[entity_5-1]='';
  memset(entity_1, 'H', 94-1);
  entity_1[94-1]='';
  memcpy(entity_6, entity_1, 94*sizeof(char));
}