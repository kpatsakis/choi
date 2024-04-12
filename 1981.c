void fun()
{
  int entity_6 = 99;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  char* entity_5;
  memset(entity_3, 'Z', entity_6-1);
  entity_3[entity_6-1]='';
  entity_5 = (char*)malloc(16*sizeof(char));
  entity_5[16-1]='';
  memcpy(entity_5, entity_3, entity_6*sizeof(char));
}