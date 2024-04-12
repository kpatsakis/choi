void fun()
{
  int entity_5 = 89;
  char* entity_8;
  char entity_1[39] = "";
  entity_1 = NULL;
  char* entity_2;
  memset(entity_1, 'c', 39-1);
  entity_1[39-1]='';
  entity_8 = (char*)malloc(78*sizeof(char));
  entity_8[78-1]='';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  memcpy(entity_2, entity_1, 39*sizeof(char));
}