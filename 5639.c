void fun()
{
  int entity_6 = 63;
  entity_6 = 82;
  char* entity_0;
  char entity_3[95] = "";
  entity_3 = NULL;
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  memset(entity_3, 'D', 95-1);
  entity_3[95-1]='';
  strcpy(entity_0, entity_3);
}