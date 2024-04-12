void fun()
{
  int entity_8 = 46;
  char* entity_6;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  memset(entity_7, 'N', entity_8-1);
  entity_7[entity_8-1]='';
  entity_6 = (char*)malloc(50*sizeof(char));
  entity_6[50-1]='';
  entity_8 = 3;
  memcpy(entity_6, entity_7, entity_8*sizeof(char));
}