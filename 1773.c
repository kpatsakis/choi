void fun()
{
  int entity_4 = 63;
  char* entity_2;
  char entity_5[82] = "";
  entity_5 = NULL;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  entity_2 = (char*)malloc(9*sizeof(char));
  entity_2[9-1]='';
  memset(entity_8, 'a', entity_4-1);
  entity_8[entity_4-1]='';
  memset(entity_5, 'T', 82-1);
  entity_5[82-1]='';
  entity_4 = 96;
  memcpy(entity_2, entity_8, entity_4*sizeof(char));
}