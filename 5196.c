void fun()
{
  int entity_3 = 96;
  entity_3 = 20;
  char* entity_6;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  entity_6 = (char*)malloc(6*sizeof(char));
  entity_6[6-1]='';
  memset(entity_7, 'y', entity_3-1);
  entity_7[entity_3-1]='';
  memcpy(entity_6, entity_7, entity_3*sizeof(char));
}