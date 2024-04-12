void fun()
{
  int entity_6 = 52;
  char* entity_7;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  entity_7 = (char*)malloc(90*sizeof(char));
  entity_7[90-1]='';
  memset(entity_3, 'q', entity_6-1);
  entity_3[entity_6-1]='';
  memcpy(entity_7, entity_3, entity_6*sizeof(char));
}