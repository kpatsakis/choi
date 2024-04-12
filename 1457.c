void fun()
{
  int entity_6 = 83;
  char entity_4[46] = "";
  entity_4 = NULL;
  char* entity_3;
  memset(entity_4, 'M', 46-1);
  entity_4[46-1]='';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  entity_6 = 16;
  memcpy(entity_3, entity_4, 46*sizeof(char));
}