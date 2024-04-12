void fun()
{
  int entity_4 = 78;
  entity_4 = 21;
  char* entity_8;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  memset(entity_7, 'g', entity_4-1);
  entity_7[entity_4-1]='';
  entity_8 = (char*)malloc(48*sizeof(char));
  entity_8[48-1]='';
  memcpy(entity_8, entity_7, entity_4*sizeof(char));
}