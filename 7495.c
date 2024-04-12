void fun()
{
  int entity_3 = 41;
  int entity_6 = 7;
  entity_3 = 64;
  char* entity_8;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  memset(entity_2, 'y', entity_3-1);
  entity_2[entity_3-1]='';
  entity_8 = (char*)malloc(75*sizeof(char));
  entity_8[75-1]='';
  memcpy(entity_8, entity_2, entity_3*sizeof(char));
}