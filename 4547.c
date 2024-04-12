void fun()
{
  int entity_6 = 65;
  char* entity_3;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  memset(entity_4, 'Z', entity_6-1);
  entity_4[entity_6-1]='';
  entity_3 = (char*)malloc(48*sizeof(char));
  entity_3[48-1]='';
  memcpy(entity_3, entity_4, entity_6*sizeof(char));
}