void fun()
{
  int entity_6 = 82;
  entity_6 = 18;
  char entity_0 = 'E';
  char* entity_8;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  memset(entity_7, 'R', entity_6-1);
  entity_7[entity_6-1]='';
  entity_8 = (char*)malloc(50*sizeof(char));
  entity_8[50-1]='';
  memcpy(entity_8, entity_7, entity_6*sizeof(char));
}