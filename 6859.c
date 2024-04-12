void fun()
{
  int entity_3 = 18;
  char* entity_4;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  memset(entity_7, 's', entity_3-1);
  entity_7[entity_3-1]='';
  entity_4 = (char*)malloc(80*sizeof(char));
  entity_4[80-1]='';
  memcpy(entity_4, entity_7, entity_3*sizeof(char));
}