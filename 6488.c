void fun()
{
  int entity_3 = 93;
  int entity_2 = 63;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  char* entity_8;
  memset(entity_4, 'p', entity_2-1);
  entity_4[entity_2-1]='';
  entity_8 = (char*)malloc(70*sizeof(char));
  entity_8[70-1]='';
  entity_2 = 49;
  memcpy(entity_8, entity_4, entity_2*sizeof(char));
}