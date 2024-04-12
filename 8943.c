void fun()
{
  int entity_5 = 10;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  char* entity_8;
  char entity_4[53] = "";
  entity_4 = NULL;
  entity_8 = (char*)malloc(94*sizeof(char));
  entity_8[94-1]='';
  memset(entity_2, 'h', entity_5-1);
  entity_2[entity_5-1]='';
  memset(entity_4, 'B', 53-1);
  entity_4[53-1]='';
  memcpy(entity_8, entity_2, entity_5*sizeof(char));
}