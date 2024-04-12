void fun()
{
  int entity_2 = 57;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  char* entity_7;
  memset(entity_4, 'l', entity_2-1);
  entity_4[entity_2-1]='';
  entity_7 = (char*)malloc(97*sizeof(char));
  entity_7[97-1]='';
  memcpy(entity_7, entity_4, entity_2*sizeof(char));
}