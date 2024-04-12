void fun()
{
  int entity_4 = 17;
  char* entity_7;
  char entity_5[66] = "";
  entity_5 = NULL;
  memset(entity_5, 'F', 66-1);
  entity_5[66-1]='';
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[entity_4-1]='';
  strcpy(entity_7, entity_5);
}