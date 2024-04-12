void fun()
{
  int entity_3 = 66;
  char* entity_6;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  memset(entity_7, 'N', entity_3-1);
  entity_7[entity_3-1]='';
  entity_6 = (char*)malloc(59*sizeof(char));
  entity_6[59-1]='';
  memcpy(entity_6, entity_7, entity_3*sizeof(char));
}