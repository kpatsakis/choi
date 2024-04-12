void fun()
{
  int entity_1 = 37;
  char entity_8[14] = "";
  entity_8 = NULL;
  char entity_3 = 't';
  char* entity_2;
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  memset(entity_8, 'M', 14-1);
  entity_8[14-1]='';
  memcpy(entity_2, entity_8, 14*sizeof(char));
}