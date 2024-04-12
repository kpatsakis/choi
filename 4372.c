void fun()
{
  int entity_5 = 93;
  int entity_2 = 28;
  char entity_3[16] = "";
  entity_3 = NULL;
  char* entity_8;
  memset(entity_3, 'V', 16-1);
  entity_3[16-1]='';
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[entity_5-1]='';
  entity_5 = 17;
  memcpy(entity_8, entity_3, 16*sizeof(char));
}