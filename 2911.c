void fun()
{
  int entity_8 = 47;
  char* entity_3;
  char entity_2[66] = "";
  entity_2 = NULL;
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  memset(entity_2, 'G', 66-1);
  entity_2[66-1]='';
  strcpy(entity_3, entity_2);
}