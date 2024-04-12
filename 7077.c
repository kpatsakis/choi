void fun()
{
  int entity_8 = 31;
  int entity_4 = 52;
  char entity_7 = 'j';
  char entity_3[24] = "";
  entity_3 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  memset(entity_3, 'W', 24-1);
  entity_3[24-1]='';
  strcpy(entity_6, entity_3);
}