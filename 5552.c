void fun()
{
  int entity_8 = 49;
  entity_8 = 45;
  char* entity_3;
  char entity_7[66] = "";
  entity_7 = NULL;
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  memset(entity_7, 'K', 66-1);
  entity_7[66-1]='';
  strcpy(entity_3, entity_7);
}