void fun()
{
  int entity_4 = 3;
  char* entity_8;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  entity_8 = (char*)malloc(79*sizeof(char));
  entity_8[79-1]='';
  memset(entity_7, 'k', entity_4-1);
  entity_7[entity_4-1]='';
  memcpy(entity_8, entity_7, entity_4*sizeof(char));
}