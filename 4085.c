void fun()
{
  char entity_7[66] = "";
  entity_7 = NULL;
  char* entity_6;
  memset(entity_7, 's', 66-1);
  entity_7[66-1]='';
  entity_6 = (char*)malloc(63*sizeof(char));
  entity_6[63-1]='';
  strcpy(entity_6, entity_7);
}