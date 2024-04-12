void fun()
{
  int entity_2 = 93;
  char entity_5 = 'P';
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(53*sizeof(char));
  entity_3[53-1]='';
  memset(entity_8, 'W', entity_2-1);
  entity_8[entity_2-1]='';
  memcpy(entity_3, entity_8, entity_2*sizeof(char));
}