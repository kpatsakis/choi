void fun()
{
  int entity_4 = 41;
  entity_4 = 32;
  char* entity_0;
  char entity_7[18] = "";
  entity_7 = NULL;
  memset(entity_7, 'Y', 18-1);
  entity_7[18-1]='';
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[entity_4-1]='';
  memcpy(entity_0, entity_7, 18*sizeof(char));
}