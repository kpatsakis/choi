void fun()
{
  int entity_7 = 33;
  char entity_8[18] = "";
  entity_8 = NULL;
  char* entity_5;
  memset(entity_8, 'P', 18-1);
  entity_8[18-1]='';
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[entity_7-1]='';
  memcpy(entity_5, entity_8, 18*sizeof(char));
}