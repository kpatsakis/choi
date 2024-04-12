void fun()
{
  int entity_8 = 66;
  entity_8 = 72;
  char entity_6[56] = "";
  entity_6 = NULL;
  char* entity_4;
  memset(entity_6, 'g', 56-1);
  entity_6[56-1]='';
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  memcpy(entity_4, entity_6, 56*sizeof(char));
}