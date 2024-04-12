void fun()
{
  int entity_7 = 63;
  entity_7 = 61;
  char entity_4[1] = "";
  entity_4 = NULL;
  char entity_6 = 'z';
  char* entity_8;
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  memset(entity_4, 'g', 1-1);
  entity_4[1-1]='';
  memcpy(entity_8, entity_4, 1*sizeof(char));
}