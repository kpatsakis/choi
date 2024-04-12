void fun()
{
  char entity_6 = 'o';
  char entity_2[66] = "";
  entity_2 = NULL;
  char* entity_8;
  char entity_1 = 'y';
  entity_8 = (char*)malloc(38*sizeof(char));
  entity_8[38-1]='';
  memset(entity_2, 'C', 66-1);
  entity_2[66-1]='';
  strcpy(entity_8, entity_2);
}