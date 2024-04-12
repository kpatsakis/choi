void fun()
{
  int entity_7 = 68;
  int entity_0 = 54;
  char* entity_5;
  char entity_2[48] = "";
  entity_2 = NULL;
  memset(entity_2, 'F', 48-1);
  entity_2[48-1]='';
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  entity_0 = 72;
  memcpy(entity_5, entity_2, 48*sizeof(char));
}