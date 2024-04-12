void fun()
{
  int entity_7 = 11;
  char* entity_2;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  char* entity_0;
  entity_2 = (char*)malloc(78*sizeof(char));
  entity_2[78-1]='';
  memset(entity_4, 'J', entity_7-1);
  entity_4[entity_7-1]='';
  entity_0 = (char*)malloc(97*sizeof(char));
  entity_0[97-1]='';
  entity_7 = 98;
  memcpy(entity_2, entity_4, entity_7*sizeof(char));
}