void fun()
{
  int entity_5 = 52;
  char entity_8[48] = "";
  entity_8 = NULL;
  char* entity_2;
  memset(entity_8, 'e', 48-1);
  entity_8[48-1]='';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  entity_5 = 66;
  memcpy(entity_2, entity_8, 48*sizeof(char));
}