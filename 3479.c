void fun()
{
  int entity_6 = 94;
  char* entity_8;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  entity_8 = (char*)malloc(11*sizeof(char));
  entity_8[11-1]='';
  memset(entity_7, 'C', entity_6-1);
  entity_7[entity_6-1]='';
  entity_6 = 78;
  memcpy(entity_8, entity_7, entity_6*sizeof(char));
}