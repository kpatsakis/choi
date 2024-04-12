void fun()
{
  int entity_4 = 45;
  int entity_8 = 13;
  char* entity_6;
  char entity_3[24] = "";
  entity_3 = NULL;
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  memset(entity_3, 'Z', 24-1);
  entity_3[24-1]='';
  strcpy(entity_6, entity_3);
}