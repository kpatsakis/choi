void fun()
{
  int entity_2 = 91;
  entity_2 = 64;
  char* entity_7;
  char entity_6[55] = "";
  entity_6 = NULL;
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[entity_2-1]='';
  memset(entity_6, 'W', 55-1);
  entity_6[55-1]='';
  memcpy(entity_7, entity_6, 55*sizeof(char));
}