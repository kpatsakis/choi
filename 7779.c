void fun()
{
  int entity_4 = 88;
  char entity_8[95] = "";
  entity_8 = NULL;
  char* entity_2;
  memset(entity_8, 'j', 95-1);
  entity_8[95-1]='';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memcpy(entity_2, entity_8, 95*sizeof(char));
}