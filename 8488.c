void fun()
{
  int entity_1 = 57;
  int entity_8 = 80;
  char* entity_7;
  char entity_6[74] = "";
  entity_6 = NULL;
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  memset(entity_6, 'E', 74-1);
  entity_6[74-1]='';
  strcpy(entity_7, entity_6);
}