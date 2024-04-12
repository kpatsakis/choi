void fun()
{
  int entity_5 = 69;
  char* entity_3;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  memset(entity_8, 'v', entity_5-1);
  entity_8[entity_5-1]='';
  entity_3 = (char*)malloc(2*sizeof(char));
  entity_3[2-1]='';
  memcpy(entity_3, entity_8, entity_5*sizeof(char));
}