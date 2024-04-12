void fun()
{
  int entity_5 = 2;
  int entity_2 = 98;
  char* entity_1;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  memset(entity_8, 'L', entity_5-1);
  entity_8[entity_5-1]='';
  entity_1 = (char*)malloc(48*sizeof(char));
  entity_1[48-1]='';
  memcpy(entity_1, entity_8, entity_5*sizeof(char));
}