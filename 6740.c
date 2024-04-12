void fun()
{
  int entity_5 = 72;
  entity_5 = 43;
  char entity_2[40] = "";
  entity_2 = NULL;
  char* entity_6;
  char entity_8[59] = "";
  entity_8 = NULL;
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[entity_5-1]='';
  memset(entity_2, 'Z', 40-1);
  entity_2[40-1]='';
  memset(entity_8, 'z', 59-1);
  entity_8[59-1]='';
  memcpy(entity_6, entity_8, 59*sizeof(char));
}