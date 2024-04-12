void fun()
{
  char entity_6[66] = "";
  entity_6 = NULL;
  char* entity_8;
  char* entity_3;
  entity_3 = (char*)malloc(74*sizeof(char));
  entity_3[74-1]='';
  memset(entity_6, 'T', 66-1);
  entity_6[66-1]='';
  entity_8 = (char*)malloc(57*sizeof(char));
  entity_8[57-1]='';
  strcpy(entity_3, entity_6);
}