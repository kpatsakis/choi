void fun()
{
  char* entity_6;
  char entity_0[66] = "";
  entity_0 = NULL;
  entity_6 = (char*)malloc(95*sizeof(char));
  entity_6[95-1]='';
  memset(entity_0, 'E', 66-1);
  entity_0[66-1]='';
  strcpy(entity_6, entity_0);
}