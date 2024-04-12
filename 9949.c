void fun()
{
  int entity_5 = 32;
  char entity_8[6] = "";
  entity_8 = NULL;
  char* entity_1;
  memset(entity_8, 'M', 6-1);
  entity_8[6-1]='';
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  entity_5 = 90;
  memcpy(entity_1, entity_8, 6*sizeof(char));
}