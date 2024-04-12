void fun()
{
  int entity_5 = 92;
  int entity_4 = 0;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  char* entity_2;
  memset(entity_8, 'z', entity_5-1);
  entity_8[entity_5-1]='';
  entity_2 = (char*)malloc(17*sizeof(char));
  entity_2[17-1]='';
  memcpy(entity_2, entity_8, entity_5*sizeof(char));
}