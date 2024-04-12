void fun()
{
  int entity_3 = 31;
  int entity_4 = 18;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(88*sizeof(char));
  entity_8[88-1]='';
  memset(entity_2, 'h', entity_4-1);
  entity_2[entity_4-1]='';
  entity_4 = 59;
  memcpy(entity_8, entity_2, entity_4*sizeof(char));
}