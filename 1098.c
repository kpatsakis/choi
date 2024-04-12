void fun()
{
  int entity_0 = 4;
  char* entity_6;
  char* entity_5;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  entity_6 = (char*)malloc(67*sizeof(char));
  entity_6[67-1]='';
  memset(entity_8, 'g', entity_0-1);
  entity_8[entity_0-1]='';
  entity_5 = (char*)malloc(53*sizeof(char));
  entity_5[53-1]='';
  memcpy(entity_5, entity_8, entity_0*sizeof(char));
}