void fun()
{
  int entity_6 = 7;
  entity_6 = 31;
  char* entity_7;
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  memset(entity_8, 'v', entity_6-1);
  entity_8[entity_6-1]='';
  entity_7 = (char*)malloc(78*sizeof(char));
  entity_7[78-1]='';
  memcpy(entity_7, entity_8, entity_6*sizeof(char));
}