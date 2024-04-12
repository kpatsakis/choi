void fun()
{
  int entity_0 = 58;
  char* entity_5;
  char entity_3[95] = "";
  entity_3 = NULL;
  memset(entity_3, 's', 95-1);
  entity_3[95-1]='';
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  strcpy(entity_5, entity_3);
}