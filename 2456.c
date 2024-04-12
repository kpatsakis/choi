void fun()
{
  int entity_6 = 53;
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(90*sizeof(char));
  entity_4[90-1]='';
  memset(entity_8, 'g', entity_6-1);
  entity_8[entity_6-1]='';
  entity_6 = 82;
  memcpy(entity_4, entity_8, entity_6*sizeof(char));
}