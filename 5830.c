void fun()
{
  int entity_6 = 57;
  char entity_5 = 'K';
  char* entity_8;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  memset(entity_4, 'F', entity_6-1);
  entity_4[entity_6-1]='';
  entity_8 = (char*)malloc(80*sizeof(char));
  entity_8[80-1]='';
  memcpy(entity_8, entity_4, entity_6*sizeof(char));
}