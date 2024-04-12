void fun()
{
  int entity_3 = 57;
  entity_3 = 75;
  char* entity_5;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  memset(entity_6, 'w', entity_3-1);
  entity_6[entity_3-1]='';
  entity_5 = (char*)malloc(79*sizeof(char));
  entity_5[79-1]='';
  memcpy(entity_5, entity_6, entity_3*sizeof(char));
}