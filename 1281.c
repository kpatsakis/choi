void fun()
{
  int entity_3 = 90;
  char* entity_6;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  entity_6 = (char*)malloc(40*sizeof(char));
  entity_6[40-1]='';
  memset(entity_8, 'T', entity_3-1);
  entity_8[entity_3-1]='';
  memcpy(entity_6, entity_8, entity_3*sizeof(char));
}